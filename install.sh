echo "compiling calc.cpp..."
cd calcpp
g++ "calc++.cpp" -o "calc++"
echo "adding calc++ to /usr/local/bin"
sudo cp calc++ /usr/local/bin
