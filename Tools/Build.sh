# Get Into Root Repo Dir
echo "[STS BUILD HELPER] - Entering Root Repo Directory"
cd ..


# Delete Binary If Exists 
echo "[STS BUILD HELPER] - Checking If Binary Exists"
if [ -f "Binaries/BrainGenix-STS" ]
then
    echo "[STS BUILD HELPER] - Removing Last Executable"
    rm Binaries/BrainGenix-STS
else
    echo "[STS BUILD HELPER] - No Binaries To Clean"
fi


# Check If Configuration Needs To Be Run
echo "[STS BUILD HELPER] - Checking If Build Directory Already Exists"
if [ -d "Build" ]
then 
    echo "[STS BUILD HELPER] - Build Directory Already Exists, Skipping Generation"
    cd Build
else 
    # Create Build Dir
    echo "[STS BUILD HELPER] - Creating Build Directory"
    mkdir -p Build

    # Enter Build Dir
    echo "[STS BUILD HELPER] - Entering Build Directory"
    cd Build

    # Make Only BrainGenix-STS
    echo "[STS BUILD HELPER] - Configuring Build Files"
    cmake ..
fi


# Build Files
echo "[STS BUILD HELPER] - Building, Please Wait. This may take some time"
cmake --build . --target BrainGenix-STS -j $1


# Run Program
cd ../Binaries
echo "[STS BUILD HELPER] - Checking If Binary Exists"
if [ -f "BrainGenix-STS" ]
then
    echo "[STS BUILD HELPER] - Running Program"
    ./BrainGenix-STS
else
    echo "[STS BUILD HELPER] - Build Failed! Exiting"
fi
cd ..
