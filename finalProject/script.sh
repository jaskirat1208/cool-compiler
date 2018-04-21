cd asgn4
make
bin/irgen $1 > ../asgn2/temp.ir
cd ../asgn2
./script.sh temp.ir
