make
bin/codegen $1
g++ asmOut/result.s -no-pie
./a.out
rm a.out
