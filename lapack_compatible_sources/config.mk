CC      = icc
CCFLAGS = -O3 -fopenmp
LD      = icc
LDFLAGS = -O3 -fopenmp

INCLUDES= -I./include

LIBS_MKL_64 =  ${MKLROOT}/lib/libmkl_intel_ilp64.a \
${MKLROOT}/lib/libmkl_sequential.a \
${MKLROOT}/lib/libmkl_core.a -lpthread -lm -ldl

LIBS_MKL_32 =  ${MKLROOT}/lib/libmkl_intel_lp64.a \
${MKLROOT}/lib/libmkl_sequential.a \
${MKLROOT}/lib/libmkl_core.a -lpthread -lm -ldl