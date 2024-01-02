# Lessons learnt

1. Do not forget to include the file (usually a .cpp file) that contains the source of each function. Otherwise you will get a linker error. e.g. '#include "src\source_file.cpp"' in test program.
2. A  class has member data and member functions.
3. Declare all destructors in a class as virtual. Failing to do so may lead to memory problems.
4. Call-by-value (copies of parameters made in stack when function is called) vs Call-by-reference (function works with the address of input parameter, not its copy).
5. One disadvantage of call-by-value is when the objects copied are large e.g. class objects. The code will work but is not efficient.
6. One disadvantage of call-by-reference is that the function may modify our data, which can be an adverse side-effect.
7. We can use parameters by constant-reference e.g. `double function(const SampleClass& myClass);` which will call-by-reference with the advantage that the data cannot be modified.
8. Constant member functions e.g. `double function() const` whereby the member function `function` cannot modify private member data.
