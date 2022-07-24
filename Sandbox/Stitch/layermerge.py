#############################################################################
# this code merges multiple slices into the rgb or any composite form we need.
#############################################################################


import imagej
import scyjava as sj
import os
import shutil
from config.definitions import ROOT_DIR

# initialize ImageJ2
ij = imagej.init(mode='interactive')
# import ImageJ classes
IJ = sj.jimport('ij.IJ')

'''
slice merge class 
slice merge class has functions which takes image slices and convert into compresses rgb images or 
any such composite images
'''


class SliceMerge:
    def __init__(self):

        # by default DataLocation and OutputDirectory variables point to test data provided with the module.
        self.DataLocation = os.path.join(ROOT_DIR, 'output')

        '''
        stack to rgb function
        
        This function takes slices of images and convert it into image stacks . 
        These image stacks are then converted into 24bit rgb images from the 3 images in the stack
        '''

    def StackToRGB(self, DataLocation):
        self.DataLocation = DataLocation
        macrotest = """
        run("Image Sequence...", "dir=""" + self.DataLocation + """/ sort");
        run("Stack to RGB");
        saveAs("Jpeg", \"""" + self.DataLocation + """/result.jpg");

        """
        print(macrotest)
        IJ.runMacro(macrotest)


        print(" rgb image generated")


        '''
        test function
        
        test function testes all the methods in the given class Slice_merge
        '''

    def Test(self):
        print("test started")
        #os.remove(os.path.join(ROOT_DIR, 'results.jpg'))
        self.StackToRGB(self.DataLocation)
        print("we moved past the function calling")
        if os.path.exists("output/result.jpg"):
            print("stack to rgb functionality verified")
        else:
            print(" stack to rgb functionality failed")



