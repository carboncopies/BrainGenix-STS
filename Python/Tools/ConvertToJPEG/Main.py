# Convert from SHARD files To JPEG

import cloudvolume
from cloudvolume.volumecutout import VolumeCutout

FilePath = '/home/tliao/Remote/CarbonCopies/BrainGenix/BrainGenix-STS/Datasets/Drosophila-Images/jpeg'

# Setup Cloud Volume Instance
CVInstance = cloudvolume.CloudVolume(f'file://{FilePath}', parallel=True, mip=[8,8,8])

# VolumeCutout = CVInstance.download_to_file("./fdsafds", cloudvolume.Bbox((15000,22000,18000), (3440, 3440,1)))
# VolumeCutout.save_images()

Img = CVInstance.download_point((15000,22000,18000), size=1024)
Img.save_images()
