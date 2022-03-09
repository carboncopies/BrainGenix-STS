#!/usr/bin/env python3

import os
from tqdm import tqdm
import numpy as np
import magic


# TODO: We should be able to scan the dataset/database and put the ID structure into memory.
#       We should be able to load individual images by ID (ID will be the layer number and image number within the layer)


class DataLoader:
    def __init__(self, root) -> None:
        self.root = root

    def load():
        layers = [[]]
        with tqdm(os.walk(root)) as progress:
            for path, dirs, files in progress:
                layer = []
                
                for file in files:
                    file_path = path+'/'+file

                    if magic.from_file(file_path, mime=True) == "image/jpeg":
                        layer.append(file_path)
                        image = np.asarray(Image.open(file_path))

                        num_images += 1
                        if image.sum() == 0:
                            num_empty += 1
                    
                    # print(file)

                    # Image.open(path+file).show()

                    # count += 1
                    # if count > 1:
                    #     break;
                
                # layers.append(layer) # TODO: determine if this will cause us to use too much memory
                num_layers += 1

                progress.set_description(f'Images: {num_images} | Path: "{path}" \t |')

        print(f"Empty Layers: {num_empty}")
