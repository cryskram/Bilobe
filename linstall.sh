#!/usr/bin/bash
echo "Bilobe Installer Script..."

checkPKGM()
{
    [ -x "$(which $1)" ]
}

function bilobeAPT() {
    clear
    echo "Starting Bilobe Installation Bilobe"
    echo "Checking essentials required"
    sudo apt-get install cmake build-essential
}

function bilobePAC()
{
    clear
    echo "Starting Bilobe Installation Bilobe"
    echo "Checking essentials required"
    sudo pacman -Sy base-devel make cmake
}

function buildBilobe() {
    echo "Make directory build..."
    mkdir build
    echo "Change directory..."
    cd build
    echo "Building Bilobe project..."
    cmake ..
    echo "Built bilobe..."
    sudo make install
    echo "Successfully installed Bilobe..."
}

if checkPKGM apt-get
then
    bilobeAPT
elif checkPKGM pacman
then
    bilobePAC
else
    echo "Need to implement the code for your OS..."
fi
