CXXFLAGS = -W

#��������
objects = main.o 

#����Ŀ���ļ�
edit : $(objects)
	g++ -o Find  $(objects)
#�м�Ŀ���ļ�

main.o :map.hpp memory_pool.hpp

#αĿ���ļ�
.PHONY : clean
clean : 
	rm  memory_pool  $(objects)
