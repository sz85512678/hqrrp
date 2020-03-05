CONFIG=config
include ${CONFIG}.mk

# Overall function compatible to both int or long, to be finished

simple_test_INT.x : simple_test_INT.o NoFLA_HQRRP_WY_blk_var4_INT.o 
	$(LD) $(INCLUDES) $(LDFLAGS) \
            -o simple_test_INT.x \
            simple_test_INT.o \
            NoFLA_HQRRP_WY_blk_var4_INT.c -lm \
            ${LIBS_MKL_64} -L/usr/local/opt/llvm/lib

# Use wrapper, accepts allows changing INT to both int or long, but MKL has to be 32
simple_test_using_wrapper.x : simple_test_using_wrapper.o NoFLA_HQRRP_WY_blk_var4.o dgeqp4_wrapper.o
	$(LD) $(INCLUDES) $(LDFLAGS) \
            -o simple_test_using_wrapper.x \
            simple_test_using_wrapper.o \
            NoFLA_HQRRP_WY_blk_var4.c \
            dgeqp4_wrapper.c -lm \
            ${LIBS_MKL_32} -L/usr/local/opt/llvm/lib

# Original
simple_test.x : simple_test.o NoFLA_HQRRP_WY_blk_var4.o dgeqp4_INT.o
	$(LD) $(INCLUDES) $(LDFLAGS) \
            -o simple_test.x \
            simple_test.o \
            NoFLA_HQRRP_WY_blk_var4.c \
            dgeqp4_INT.c -lm \
            ${LIBS_MKL_32} -L/usr/local/opt/llvm/lib

test_ilaenv: test_ilaenv.c
	$(CC) -o $@.out $< $(CCFLAGS) $(INCLUDES) $(LIBS_MKL_64)     


%.o : %.c
	$(CC) $(INCLUDES) $(CCFLAGS) -c $< -o $@

clean: 
	rm -rf a.out *.x *.o *~ core *.dSYM

