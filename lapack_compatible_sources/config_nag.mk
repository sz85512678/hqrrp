CC      = icc
CCFLAGS = -O3 -fopenmp
LD      = icc
LDFLAGS = -O3 -fopenmp

INCLUDES= -I./include

LIBS_MKL_64 =  -Wl,--start-group ${MKLROOT}/lib/intel64/libmkl_intel_ilp64.a \
 ${MKLROOT}/lib/intel64/libmkl_sequential.a \
 ${MKLROOT}/lib/intel64/libmkl_core.a -Wl,-liomp5 -lpthread -lm -ldl\

# LIBS_MKL_32 =  ${MKLROOT}/lib/libmkl_intel_lp64.a \
# ${MKLROOT}/lib/libmkl_sequential.a \
# ${MKLROOT}/lib/libmkl_core.a -lpthread -lm -ldl