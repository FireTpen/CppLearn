
/*
学习目标：
·掌握类模板成员函数分文件编写产生的问题以及解决方式

问题：
·类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到

解决：
·方式1：头文件中直接包含.cpp源文件

·方式2：讲声明和实现写到同一个文件中，并更改后缀名为.hpp
hpp是约定俗成的名称，不是强制的。


*/
