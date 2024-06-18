CXXFLAGS = -W

#变量定义
objects = main.o 

#最终目标文件
edit : $(objects)
	g++ -o Find  $(objects)
#中间目标文件

main.o :map.hpp memory_pool.hpp

#伪目标文件
.PHONY : clean
clean : 
	rm  memory_pool  $(objects)
