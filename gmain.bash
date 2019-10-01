if [ -d "gmain/" ] ; then
rm -rf gmain/;
fi;
mkdir gmain;
if [ -d "output/" ]; then 
rm -rf output; 
fi;
mkdir output;
cd gmain;
g++ ../algorithm/algorithm.cpp ../algorithm/main.cpp ../algorithm/private.cpp -o gmain.exe;
./gmain.exe > ../output/output.tcl;
cd ..;
touch rmfile.bash ;
echo "rm -rf gmain; rm -rf output; rm -rf rmfile.bash" > rmfile.bash;
