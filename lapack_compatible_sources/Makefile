
# Defintions of variables.

CC      = /usr/local/opt/llvm/bin/clang
CCFLAGS = -O0 -g -fopenmp
LD      = /usr/local/opt/llvm/bin/clang
LDFLAGS = -O0 -g -fopenmp

INCLUDES= -I./include

LIBS_MKL_64 =  ${MKLROOT}/lib/libmkl_intel_ilp64.a \
${MKLROOT}/lib/libmkl_sequential.a \
${MKLROOT}/lib/libmkl_core.a -lpthread -lm -ldl

LIBS_MKL_32 =  ${MKLROOT}/lib/libmkl_intel_lp64.a ${MKLROOT}/lib/libmkl_sequential.a ${MKLROOT}/lib/libmkl_core.a -lpthread -lm -ldl

# Defintions of rules.

# all: simple_test.x simple_test_64.x

simple_test_64.x : simple_test_64.o NoFLA_HQRRP_WY_blk_var4.o dgeqp4_INT.o
	$(LD) $(INCLUDES) $(LDFLAGS) \
            -o simple_test_64.x \
            simple_test_64.o \
            NoFLA_HQRRP_WY_blk_var4.c \
            dgeqp4_INT.c -lm \
            ${LIBS_MKL_32} -L/usr/local/opt/llvm/lib

simple_test.x : simple_test.o NoFLA_HQRRP_WY_blk_var4.o dgeqp4_INT.o
	$(LD) $(INCLUDES) $(LDFLAGS) \
            -o simple_test.x \
            simple_test.o \
            NoFLA_HQRRP_WY_blk_var4.c \
            dgeqp4_INT.c -lm \
            ${LIBS_MKL_32} -L/usr/local/opt/llvm/lib

%.o : %.c
	$(CC) $(INCLUDES) $(CCFLAGS) -c $< -o $@

clean: 
	rm -f a.out *.x *.o *~ core

