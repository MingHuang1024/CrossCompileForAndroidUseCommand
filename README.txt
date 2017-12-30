本例使用ndk已编译好的工具链来交叉编译arm架构的so包

不依赖于android studio 及 gradle，直接用命令行编译。

先执行/home/hm/cmake_sample/use_ndk_toolchain/c/build 目录下的cofigure.sh脚本，
再在/home/hm/cmake_sample/use_ndk_toolchain/c/build 目录下执行 make clean 
再执行 make 命令即可生成so包
