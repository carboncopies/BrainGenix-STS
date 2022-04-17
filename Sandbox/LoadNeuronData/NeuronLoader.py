#!/usr/bin/env python3

import os
from tqdm import tqdm
import numpy as np
import magic

# use this for neuron detection? https://github.com/unetzjuser/Finetuned-unet-model-for-neuron-detection

root = os.environ.get('DATASET_ROOT_DIR') # Set the dataset root directory as an environment variable


# dirs = [dir for dir in os.listdir(root) if os.path.isdir(root+dir)]

# # print(os.listdir(root)[2])
# print(root)
# print(dirs)


# for dir in dirs:
#     if dir.isdigit():
#         dir_id = int(dir)
#         # No need to check if bigger or smaller, we just order the list (in which case we can just start turning it into a model)


#     else:
#         print(f"Ignoring directory '{dir}'")



from PIL import Image

count = 0


layers = [[]] # must be sorted and in order, must contain a number of images per layer

# TODO: If the layers aren't sorted, we can use a delta between layers to see which layers come next; the smallest delta between layers means
#       said layer comes next. This is because each layer looks fairly similar to the previous layer since each layer connects to the previous.
#       So we'll need to figure out how to take the delta of two layers (i.e., the difference). This difference must be with respect to the
#       features, so I'm unsure if this will work well when using the delta of pixel values (but it may work just fine).





# TODO: Set up an SQL server and put the images into the SQL server (unless accessing them would be faster on disk the way it is now)
#       We want to use a grid system, where each slice is part of a layer. Perhaps the slice name will be the coordinate area it takes up?

num_empty = 0
num_images = 0
num_layers = 0


# TODO: lets just grab a random image and try to detect neurons in it, just to start?



# TODO: We should scan through the list, running UNet as we go to detect neurons within the image. Note we should probably break this up into
#       smaller sections (as in, do a few chunks at a time per thread, that way we can run this on a cluster if needed potentially).

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





# for path, dirs, files in tqdm(os.walk(root)):
#     layer = []
    
#     for file in files:
#         file_path = path+'/'+file

#         if magic.from_file(file_path, mime=True) == "image/jpeg":
#             layer.append(file_path)
#             image = np.asarray(Image.open(file_path))

#             num_images += 1
#             if image.sum() == 0:
#                 num_empty += 1
        
#         # print(file)

#         # Image.open(path+file).show()

#         # count += 1
#         # if count > 1:
#         #     break;
    
#     layers.append(layer)
#     num_layers += 1

# print(f"Empty Layers: {num_empty}")

