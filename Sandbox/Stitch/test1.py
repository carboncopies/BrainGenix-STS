import stitching
import layermerge
obj1 = stitching.Stitch()
#obj1.Test()
obj2 = layermerge.SliceMerge()
obj2.Test()
obj2.StackToRGB("/home/jj/PycharmProjects/BrainGenix-STS/Sandbox/Stitch/output")