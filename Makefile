CXX 		= g++
CXXFLAGS	= -Wall -W -fPIC $(INCPATH)
INCPATH 	= -I$(USR_INC_PATH) -I/usr/include/python2.5
LIBPATH 	= -L$(USR_LIB_PATH)
LIBS		= -lboost_python
OBJS 		= Cmpx.o main.o

# Cmpx.so: $(OBJS) Cmpx_wrapper.o
# 	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) Cmpx_wrapper.o $(LIBPATH) -shared $(LIBS)

main.out: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) $(LIBPATH)
	./$@

main.o: main.cpp
Cmpx.o: Cmpx.cpp Cmpx.h
Cmpx_wrapper.o: Cmpx_wrapper.cpp


clean:
	rm -f $(OBJS) main.out Cmpx_wrapper.o Cmpx.so
