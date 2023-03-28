# 南昌大学ACM集训队出题组

[项目地址](https://github.com/ncuacm/ncutest)

项目用于出题组生成经典测试数据的程序

## 约定：

### 项目结构

* 项目约定以板块为划分依据，使用文件树结构进行细分。
* 文件夹名称约定使用中文，便于快速分类。
* 单个模块结构包括：执行体源代码、README.md

#### 结构简图

> ```markdown
> // to update
>
> ├── LICENSE # 开源许可证
> ├── README.md # 文档
> ├── get_one_random_num.cc
> ├── 图
> │   └── 1.cc
> └── 随机数
>     ├── README.md
>     ├── random_num
>     └── random_num.cc
> ```

### 开发语言与规范

1. 项目规定使用现代C++，单文件即执行体，减小ACM成员学习成本。
2. 执行体源码采用蛇形命名法，并以.cc作为后缀,头文件为.hh，如例：

> 获得一个随机数，该执行体源码命名为
>
> get_one_random_num.cc
>
> 核心常用API头文件为
>
> core.hh

3. 代码需顶冠注释，如例：

> ```C++
> /**
> //  @file get_one_random_num.cc
> //  @author SuoNi Chan (suoni1919@gmail.com)
> //  @date 2023-03-28
> //  获得一个随机数
> //  @copyright Copyright (SuoNi Chan) 2023
> //  
> **/
> ```

4. 对执行逻辑需注API描述，及给出相关使用样例。

> ```C++
> /**
> //  @in 无
>     @out 返回一个随机数字 (范围：0 ~ int_max)
>
>     @example
>     in:
>     out:
>     5
>
>     @example
>     in:
>     out:
>     99
>
>     @example
>     in:
>     out:
>     1450
> //  
> **/
> ```

### 数据呈现与存储约定

项目一律采用C++流进行文件与展示操作，参见Demo模块包

### TODO


### 问&答
