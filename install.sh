echo "compiling calc.cpp..."
cd calccpp
g++ "calc++.pp" -o "calc++"
echo "adding calc++ to /usr/local/bin"
sudo cp calc++ /usr/local/bin
