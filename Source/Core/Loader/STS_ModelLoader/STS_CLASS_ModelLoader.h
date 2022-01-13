//=================================================================//
// This file is part of the BrainGenix-STS Scan Translation System //
//=================================================================//

#pragma once

// Standard Libraries (BG convention: use <> instead of "")
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <map>
#include <vector>
#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <future>
#include <thread>
#include <chrono>

// Third-Party Libraries (BG convention: use <> instead of "")
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include <FreeImage.h>

#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>

// Internal Libraries (BG convention: use <> instead of "")
#include <STS_STRUCT_SystemUtils.h>


// FIXME: Fix reloading of same textures
// FIXME: Fix limitation of one thread
// FIXME: Implement multithreaded image preloading?

/**
 * @brief Class for loading models (fbx, gltx, etc.) based on the ASSIMP library
 * 
 */
class STS_CLASS_ModelLoader {


    private:


        std::shared_ptr<STS_STRUCT_SystemUtils> SystemUtils_; /**<System Utils Struct*/

        std::vector<std::shared_ptr<STS_OBJECT_MODEL>> WorkItems_; /**<Items For The Worker To Process*/
        std::vector<long> WorkIDs_; /**<Vector Containing IDs*/
        std::vector<bool> FlipTextures_; /**<vector Containing FlipTexture For Work Items*/
        std::vector<std::thread> WorkerThreads_; /**<List of worker threads*/
        std::mutex BlockThread_; /**<Block Threads From Doing Things*/
        bool ExitThreads_ = false; /**<Set To True To Make Threads Quit*/

        void WorkerThread(); /**<Worker Thread Function*/

        STS_OBJECT_TEXTURE_2D LoadTexture(long ID, bool FlipTextures = false);

        /**
         * @brief Function Used To Process Subnodes Of SceneFiles.
         * 
         * @param Node 
         * @param Scene 
         */
        void ProcessNode(STS_OBJECT_MODEL* Model, aiNode *Node, const aiScene *Scene, std::vector<std::string> TexturePaths);

        /**
         * @brief Process Meshes From Model.
         * 
         * @param Mesh 
         * @param Scene 
         * @return STS_OBJECT_MESH 
         */
        STS_OBJECT_MESH ProcessMesh(STS_OBJECT_MODEL* Model, aiMesh *Mesh, const aiScene *Scene, std::vector<std::string> TexturePaths);

        /**
         * @brief Load Textures From Model.
         * 
         * @param Mat 
         * @param Type 
         * @param TypeName 
         * @return std::vector<STS_OBJECT_TEXTURE_2D> 
         */
        void LoadMaterialTextures(std::vector<int>* IDs, std::vector<std::string>* Types, std::vector<std::string> TextureList, STS_OBJECT_MODEL* Model, aiMaterial *Mat, aiTextureType Type, std::string TypeName);


    public:

        void ProcessGPU(std::shared_ptr<STS_OBJECT_MODEL> Model); /**<Process the GPU stuff for each model*/


        /**
         * @brief Construct a new Model Loader object
         * 
         * @param Logger 
         * @param TextureLoader 
         */
        STS_CLASS_ModelLoader(std::shared_ptr<STS_STRUCT_SystemUtils> SystemUtils, int MaxThreadCount = -1);

        /**
         * @brief Destroy the Model Loader object
         * 
         */
        ~STS_CLASS_ModelLoader();


        /**
         * @brief Load Model From Given File.
         * 
         * @param AssetPath 
         * @param FlipTextures 
         * @return STS_OBJECT_MODEL 
         */
        void LoadModel(long AssetID, std::shared_ptr<STS_OBJECT_MODEL> Model, bool FlipTextures = false);


        /**
         * @brief Process models in scene, perform opengl loading operations on models as needed - opengl cannot be done in another thread.
         * 
         * @param ActiveScene 
         */
        void ProcessNewModels(std::shared_ptr<STS_OBJECT_SCENE> ActiveScene);


        void AddModelToLoadingQueue(long AssetID, std::shared_ptr<STS_OBJECT_MODEL> Model, bool FlipTextures = false);



};

