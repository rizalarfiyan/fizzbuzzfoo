<h1 align="center" style="margin-bottom:0">Fizz Buzz Foo</h1>
<p align="center">Created by <a href="https://github.com/rizalarfiyan/" target="_blank">Rizal Arfiyan</a> by <span style="color:red">&#10084;</span></p><br />

Fizz Buzz Foo adalah sebuah mini program untuk menyelesaikan sebuah case, digunakan untuk memenuhi tugas UTS matkul Algoritma dan Pemrograman yang diampu oleh ibu Wiwi Widayani, M.Kom.

## The Case
Write a program that prints the numbers from input (positive integer provided by the user). But for multiples of three, print "Fizz" instead of the number, for the multiples of five, print "Buzz", and for the multiples of seven, print "Foo". For numbers which are multiples of both three and five, print "FizzBuzz", three and seven, print "FizzFoo", five and seven, print "BuzzFoo", and three, five, seven print "FizzBuzzFoo".

## Flow Chart
```mermaid
graph TD
    start(["Start"])
    stop(["Stop"])
    intro[/"Output introduction greeting #quot;Fizz Buzz Foo#quot;;"/]
    declare1{{"int getLength;"}}
    declare2{{"bool hasFound;"}}
    declare3{{"char fizz[] = #quot;Fizz#quot;; \n char buzz[] = #quot;Buzz#quot;; \n char foo[] = #quot;Foo#quot;;"}}
    declare4{{"struct definition defs[3] = {{3, fizz},{5, buzz},{7, foo}};"}}
    print1[/"Output Masukkan nilai panjang looping: "/]
    input1[/"Input masukkan nilai getLength;"/]
    loop1["idx = 1;"]
    loop2{"idx <= getLength;"}
    loop3["hasFound = false;"]
    loop4["idxDef = 0;"]
    loop5{"idxDef < ARRAY_SIZE(defs);"}
    loop6{"idx % defs[idxDef].number == 0;"}
    loop7[/"Output defs[idxDef].text;"/]
    loop8["hasFound = true;"]
    loop9["idxDef++"]
    loop10{"!hasFound"}
    loop11[/"Output idx"/]
    loop12["hasFound = true;"]
    loop13["Output endl;"]
    loop14["idx++"]
    start --> intro
    intro --> declare1
    declare1 --> declare2
    declare2 --> declare3
    declare3 --> declare4
    declare4 --> print1
    print1 --> input1
    input1 --> loop1
    loop1 --> loop2
    loop2 --> |FALSE|stop
    loop2 --> |TRUE|loop3
    loop3 --> loop4
    loop4 --> loop5
    loop5 --> |TRUE|loop6
    loop6 --> |TRUE|loop7
    loop7 --> loop8
    loop8 --> loop9
    loop6 --> |FALSE|loop9
    loop9 --> loop5
    loop5 --> |FALSE|loop10
    loop10 --> |TRUE|loop11
    loop11 --> loop12
    loop12 --> loop13
    loop10 --> |FALSE|loop13
    loop13 --> loop14
    loop14 --> loop2
```