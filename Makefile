
NAME = Fractol
C = gcc
MLX_PATH = minilibx
OPENCL = -framework OpenCL -lmlx  -L  $(MLX_PATH) -I $(MLX_PATH)include -framework OpenGL -framework AppKit -lz
SRC = ./src/*.c
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): ./src/fractol.c
	$(C) $(CFLAGS) $(OPENCL) -o Fractol $(SRC)

clean:
	rm -f Fractol *.o
