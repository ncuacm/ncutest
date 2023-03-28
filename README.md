# 南昌大学ACM集训队出题组

[项目地址](https://github.com/ncuacm/ncutest)

项目用于出题组生成经典测试数据的程序

## 如何使用

**选择模块包，复制代码编译运行即可！**

## 开发&维护----约定：

### 项目结构

* 项目约定以**模块包**为区分
* 包名称约定使用**中文**，便于快速分类。
* 单个模块包：执行体源代码、README.md

### TODO

* [ ] 不重复的整数序列
* [ ] 不重复的浮点数序列
* [ ] 有向无环图
* [ ] 无向图
* [ ] ...

### 开发语言与规范

1. 项目规定使用现代C++，单文件即执行体，减小ACM成员学习成本。**[注意：采用utf-8标准]**
2. 执行体源码采用**蛇形命名法**，并以.cc作为后缀,头文件为.hh，如例：

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

项目一律采用C++流进行文件操作，参见用例[Demo模块包](https://github.com/ncuacm/ncutest/tree/main/Demo)

### TODO

### 问&答

1.为什么我电脑上的代码中文会乱码？

因为源文件采用utf-8标准，请以此标准打开。

2.我如何提交自己的想法和代码？

提交想法issues，提交代码欢迎提交pr
