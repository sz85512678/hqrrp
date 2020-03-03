
# Defintions of variables.

CC      = /usr/local/opt/llvm/bin/clang
CCFLAGS = -O -fopenmp
LD      = /usr/local/opt/llvm/bin/clang
LDFLAGS = -O -fopenmp

LIBS_MKL =  ${MKLROOT}/lib/libmkl_intel_ilp64.a \
${MKLROOT}/lib/libmkl_sequential.a \
${MKLROOT}/lib/libmkl_core.a -lpthread -lm -ldl

# Defintions of rules.

simple_test.x : simple_test.o NoFLA_HQRRP_WY_blk_var4.o
	$(LD) $(LDFLAGS) \
            -o simple_test.x \
            simple_test.o \
            NoFLA_HQRRP_WY_blk_var4.c -lm \
            ${LIBS_MKL} -L/usr/local/opt/llvm/lib

simple_test.o : simple_test.c
	$(CC) $(CCFLAGS) -O -fopenmp -c simple_test.c

%.o : %.c
	$(CC) $(CCFLAGS) -c $< -o $@

clean: 
	rm -f a.out *.x *.o *~ core

