
# Defintions of variables.

CC      = /usr/local/opt/llvm/bin/clang
CCFLAGS = -O -fopenmp
LD      = /usr/local/opt/llvm/bin/clang
LDFLAGS = -O -fopenmp

LIBS_MKL_64 =  ${MKLROOT}/lib/libmkl_intel_ilp64.a \
${MKLROOT}/lib/libmkl_sequential.a \
${MKLROOT}/lib/libmkl_core.a -lpthread -lm -ldl

LIBS_MKL_32 =  ${MKLROOT}/lib/libmkl_intel_lp64.a ${MKLROOT}/lib/libmkl_sequential.a ${MKLROOT}/lib/libmkl_core.a -lpthread -lm -ldl

# Defintions of rules.

simple_test_64.x : simple_test_64.o NoFLA_HQRRP_WY_blk_var4.o
	$(LD) $(LDFLAGS) \
            -o simple_test_64.x \
            simple_test_64.o \
            NoFLA_HQRRP_WY_blk_var4.c -lm \
            ${LIBS_MKL_32} -L/usr/local/opt/llvm/lib

simple_test_64.o : simple_test_64.c
	$(CC) $(CCFLAGS) -O -fopenmp -c simple_test_64.c

%.o : %.c
	$(CC) $(CCFLAGS) -c $< -o $@

clean: 
	rm -f a.out *.x *.o *~ core

