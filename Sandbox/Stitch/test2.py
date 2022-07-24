import os
import shutil
from config.definitions import ROOT_DIR

for i in range(1,4):
    shutil.move(os.path.join(ROOT_DIR, '50/img_t1_z1_c'+str(i)) ,os.path.join(ROOT_DIR, 'output' ))
