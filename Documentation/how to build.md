# How to build the project

1. Navigatet to the root folder of the project.
2. Open a cmd and run:

- In case of debug:
```
cmake -G "Ninja" -S . -B build
```

```
cmake --build build
```

- In case of release:
```
cmake -G "Ninja" -S . -B build -DCMAKE_BUILD_TYPE=Release
```

```
cmake --build build
```

## Compiler flags

| Name    | Description     | Release | Debug |
|---------|-----------------|:-------:|:-----:|
| -Wall   | Enables all warnings.| yes | yes   |
| -Wextra | This enables some extra warning flags that are not enabled by -Wall. | no| yes |
| -g      | Produce debugging information in the operating system's native format. | no | yes |
| -O3     | Optimize yet more. -O3 turns on all optimizations specified by -O2 and also turns on the -finline-functions, -funswitch-loops, -fpredictive-commoning, -fgcse-after-reload and -ftree-vectorize options. | yes | no |
| -flto   | Enables interprocedural optimizations across files. | yes | no |

See: [Warning](https://gcc.gnu.org/onlinedocs/gcc-4.4.3/gcc/Warning-Options.html#Warning-Options)
See: [Debugging](https://gcc.gnu.org/onlinedocs/gcc-4.4.3/gcc/Debugging-Options.html#Debugging-Options)

## Linker flags

| Name    | Description     | Release | Debug |
|---------|-----------------|:-------:|:-----:|
| -flto   | Enables interprocedural optimizations across files. | yes | no |
| --gc    | Removes all unused sections. | yes | no |

See [Linker](https://gcc.gnu.org/onlinedocs/gcc/Link-Options.html)