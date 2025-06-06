# How to build the project

1. Navigate to the root folder of the project.
2. Open a cmd and to check out the etl library run:

```
init.cmd
```
**NOTE:** If etl library has been checked out this step can be skipped.


- In case of debug:
```
build.cmd Debug
```

- In case of release:
```
build.cmd Release
```

- If you want to clean the output folder (you want a clean build):
```
build.cmd clean
```

**NOTE:** If you call build.cmd without or wrong argument, than a Debug build will be run.

## Compiler flags

| Name    | Description     | Release | Debug |
|---------|-----------------|:-------:|:-----:|
| -Wall   | Enables all warnings.| yes | yes   |
| -Wextra | This enables some extra warning flags that are not enabled by -Wall. | no| yes |
| -g      | Produce debugging information in the operating system's native format. | no | yes |
| -O3     | Optimize yet more. -O3 turns on all optimizations specified by -O2 and also turns on the -finline-functions, -funswitch-loops, -fpredictive-commoning, -fgcse-after-reload and -ftree-vectorize options. | yes | no |
| -flto   | Enables interprocedural optimizations across files. | yes | no |
| -ffunction-sections | Places each function in its own section | yes | no |
| -fdata-sections | Places each data item in its own section | yes | no |

See: [Warning](https://gcc.gnu.org/onlinedocs/gcc-4.4.3/gcc/Warning-Options.html#Warning-Options)

See: [Debugging](https://gcc.gnu.org/onlinedocs/gcc-4.4.3/gcc/Debugging-Options.html#Debugging-Options)

## Linker flags

| Name    | Description     | Release | Debug |
|---------|-----------------|:-------:|:-----:|
| -flto   | Enables interprocedural optimizations across files. | yes | no |
| --gc-sections | Removes all unused sections. | yes | no |

See [Linker](https://gcc.gnu.org/onlinedocs/gcc/Link-Options.html)