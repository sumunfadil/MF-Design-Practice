# Lessons learnt

1. Do not forget to include the file (usually a .cpp file) that contains the source of each function. Otherwise you will get a linker error. e.g. '#include "src\source_file.cpp"' in test program.
2. A  class has member data and member functions.
3. Declare all destructors in a class as virtual. Failing to do so may lead to memory problems.

