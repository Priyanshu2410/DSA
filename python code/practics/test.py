# name = input("enter your number")
# from functools import reduce


# name1 = str(input("enter your number"))
# print(name1)
# a ,b,c=10,20,30
# print(a,b,c)
# a,b,c = c,b,a
# print(a,b,c)

# x = 10
# if x % 2 == 0 :
#     print("even")
# else :
#     print("odd")
# a=0

# while a<10:
#     print(a)
#     a+=1

# my_list = [1, 2, 3, 4]
# for list_item in my_list :
#     print(list_item)


# s = """ my name is 
#     priyanshu 
#      and i am a"""

# print(s)

# s = 'Hello world!'
# print("s[4] = ", s[4])
# print("s[6:11] = ", s[6:11])
# print("s[:11] = ", s[:11])
# print("s[6:] = ", s[6:])
# print("s[-5:-2] = ", s [-5:-2])
# # s[5] ='d' #error
# s='bye' #reassignment
# print(s)

# txt = "The best things in life are free!"
# print("free" in txt)

# txt = "The best things in life are free!"
# print("expensive" not in txt)

# a = "Hello, World!"
# print(a.replace("H", "J"))

# a = "Hello! World0 PRI"
# print(a.split())
# print(a.split("!"))



# def middle_three_chars(input_string):
#     length = len(input_string)
#     middle_index = length // 2
#     middle_chars = input_string[middle_index - 1 : middle_index + 2]
#     return middle_chars

# # Example usage
# str1 = "JhonDipPeta"
# result1 = middle_three_chars(str1)
# print(result1)  # Output should be "Dip"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
# str2 = "JaSonAy"
# result2 = middle_three_chars(str2)                                                                                          
# print(result2)  # Output should be "Son"                                                                                          
                                                                                          
# age = 36                                                                                          
# name = "John"                                                                                          
# txt = "My name is John, and I am {}{}"                                                                                          
# print(txt.format(age)(name))                                                                                          
                                                                                          
# numList = ['1', '2', '3', '4']                                                                                          
# separator = "|"                                                                                          
# print(separator.join(numList))                                                                                          
                                                                                          
# my_set = {1,5}                                                                                          
# print(type(my_set))                                                                                          
                                                                                          
# thisdict = { "brand": "Ford", "model": "Mustang", "year": 1964}                                                                                          
# print(thisdict)                                                                                          
# print(thisdict["brand"])                                                                                          
                                                                                          
# x = thisdict.keys()                                                                                          
# print(x)                                                                                          
                                                                                          
#Printing Keys                                                                                          
# thisdict = { "brand": "Ford", "model": "Mustang", "year": 1964}                                                                                          
# for x in thisdict:                                                                                          
#     print(x)                                                                                          
# #Printing values                                                                                          
# for x in thisdict:                                                                                          
#     print(thisdict[x])                                                                                          
                                                                                          
# vowels keys                                                                                          
# keys = {'a', 'e', 'i', 'o', 'u' }                                                                                          
# vowels = dict.fromkeys(keys)                                                                                          
# print(vowels)                                                                                          
                                                                                          
# def my_function(*kids):                                                                                          
#     print("The youngest child is " + kids[0])                                                                                          
# my_function("Emil", "Tobias", "Linus")                                                                                          
                                                                                          
# def myfunc(n):                                                                                          
#     return lambda a : a * n                                                                                          
# mydoubler = myfunc(2)                                                                                          
# print(mydoubler(11))                                                                                          
                                                                                          
                                                                                          
# x= lambda a : a + 10                                                                                          
# print(x(5))                                                                                          
                                                                                          
# my_list = [1, 5, 4, 6, 8, 11, 3, 12]                                                                                          
# new_list = list(filter(lambda x: (x%2 == 0) , my_list))                                                                                          
# print(new_list)                                                                                          
                                                                                          
# def foo():                                                                                          
#     x = 20                                                                                          
#     def bar():                                                                                          
#     global x                                                                                          
#     x = 25                                                                                          
#     print("Before calling bar: ", x)                                                                                          
#     print("Calling bar now")                                                                                          
#     bar()                                                                                          
#     print("After calling bar: ", x)                                                                                          
# foo()                                                                                          
# print("x in main: ", x)                                                                                          
                                                                                          
# def outer():                                                                                          
#     x = "local"                                                                                          
#     def inner():                                                                                          
#         x = "nonlocal"                                                                                          
#         print("inner:", x)                                                                                          
                                                                                          
#     inner()                                                                                          
#     print("outer:", x)                                                                                           
                                                                                          
                                                                                          
# outer()                                                                                          
                                                                                          
                                                                                          
# class demo :                                                                                          
                                                                                          
#     def __init__ (self,name,age):                                                                                          
#         self.name = name                                                                                          
#         self.age = age                                                                                          
                                                                                          
#     def myfunc(self):                                                                                          
#         print("Hello my name is " + self.name)                                                                                          
#         print("Hello my age is " + self.age)                                                                                          
                                                                                          
# p1 = demo("John", "36")                                                                                          
# p1.myfunc()                                                                                          
# print(p1.name)                                                                                          
                                                                                          
# class Teacher:                                                                                          
#     def __init__(self, name, salary):                                                                                          
#         self.name = name                                                                                          
#         self.__salary = salary                                                                                          
#     def disp(self):                                                                                          
#         print(self.name)                                                                                          
#         print(self.__salary)                                                                                           
                                                                                          
# teacher = Teacher('Suzan', 500000)                                                                                          
# teacher.disp()                                                                                          
# print(teacher.name)                                                                                          
# print(teacher.__salary)                                                                                          
                                                                                          
# class Person:                                                                                          
#     def __init__(self, fname, lname):                                                                                          
#         self.firstname = fname                                                                                          
#         self.lastname = lname                                                                                          
#     def printname(self):                                                                                          
#         print(self.firstname, self.lastname)                                                                                          
                                                                                          
# class Student(Person):                                                                                          
#     pass                                                                                          
                                                                                          
# x = Student("Mike", "Olsen")                                                                                          
# x.printname()                                                                                          
                                                                                          
# class Person:                                                                                          
#     def __init__(self, fname, lname):                                                                                          
#         self.fname = fname                                                                                          
#         self.lname = lname                                                                                          
#         print("your are in parent class")                                                                                          
#     def printname(self):                                                                                          
#         print(self.fname, self.lname)                                                                                          
# class Student(Person):                                                                                          
#     def __init__(self, fname, lname):                                                                                          
#         self.fname = fname                                                                                          
#         self.lname = lname                                                                                          
#         print("Hi",self.fname)                                                                                          
# x = Student("John", "Doe")                                                                                          
# x.printname()                                                                                          
# y = Person("Johny", "Drew")                                                                                          
# y.printname()                                                                                          


# class Person:
#     def __init__(self, fname, lname):
#         self.fname = fname
#         self.lname = lname
#         print("your are in parent class")
#     def printname(self):
#         print(self.fname, self.lname)
# class Student(Person):
#     def __init__(self, fname, lname):
#     #Person.__init__(self, fname, lname)
#         super(). __init__(fname, lname)
#             self.fname = fname
#             self.lname = lname
#             print("Hi",self.fname)
# x = Student("John", "Doe")
# x.printname()
# y = Person("Johny", "Drew")
# y.printname()


# class father:
#     def __init__(self,fname,sname):
#         self.fname = fname
#         self.sname = sname
    
#     def printname(self):
#         print("this is parent", self.fname,self.sname)

# class son(father):
#     def __init__(self,fname,sname):
#         self.fname = fname
#         self.sname = sname

#     def super().printname(self):
#         print("this is child" ,self.fname,self.sname)


# p1 = son("john","doe")
# p1.printname()

# class Person:
#     def __init__(self, fname, lname,lang):
#         self.fname = fname
#         self.lname = lname
#         self.lang = lang
#         print("your are in parent class")
#     def display(self):
#         print("pppp")
#     def printname(self):
#         print(self.fname, self.lname)
# class Student(Person):
#     def __init__(self, fname, lname,lang):
#     #Person.__init__(self, fname, lname)
#         super(). __init__(fname, lname,lang)
#         self.fname = fname
#         self.lname = lname
#         print("Hi",self.fname,self.lang)
#     def display(self):
#         super().display()
#         print("fj")
# x = Student("John", "Doe","xn")
# x.printname()
# x.display()
# y = Person("Johny", "Drew","xn1s")
# y.printname()


# class father:
#     def __init__(self,fname,sname):
#         self.fname = fname
#         self.sname = sname
#         print("this is father class")

#     def printname1(self):
#         print("this is father", self.fname,self.sname)
# class mother:
#     def __init__(self,fname,sname):
#         self.fname = fname
#         self.sname = sname
#         print("this is mother class")

#     def printname2(self):
#         print("this is mother", self.fname,self.sname)


# class son(father,mother):
#     def __init__(self,fname,sname):
#         self.fname = fname
#         self.sname = sname

#     def printname(self):
#         print("this is child" ,self.fname,self.sname)

# p1 = son("john","doe")
# p1.printname()
# p1.printname1()
# p1.printname2()

# class demo :
#     name = "priyanshu"
#     age = 20
#     print(name,age)

# setattr(demo,"name","42")
# x = getattr(demo,"name","age")
# print(x)
# # print(x1)

# def add(*args):
#     sum = 0
#     for i in args:
#         sum += i
#     return sum
    

# print(add(2,3,5))


# Parent Class
# class A:
#     def first(self):
#         print("First function of class A")
# def second(self):
#     print('Second function of class A')
# # Derived Class
# class B(A):
# # Overriden Function
#     def first(self):
#          super().first()
#          print("Redefined function of class A in class B")
#     def display(self):
#         print('Display Function of Child class')
# # Driver Code
# # Creating child class object
# child_obj = B()
# # Calling the overridden method
# print("Method Overriding\n")
# child_obj.first()
# # Calling the original Parent class method
# # Using parent class object.
# A().first()


# class A:
#     @staticmethod
#     def first(a,b):
#         return a+b
# p1 = A()
# b = p1.first(2,3)
# print(b)


# import threading

# print('Let us find the current thread')

# # Find the name of the present thread
# print('Currently running thread:', threading.current_thread().name)

# # Check if it is the main thread or not
# if threading.current_thread() == threading.main_thread():
#     print('The current thread is the main thread')
# else:
#     print('The current thread is not the main thread')


# from threading import *
# from time import *
# # create our own class
# class MyThread:
# # a method that performs 3 tasks one by one
#     def prepareTea(self):
#         self.task1()
#         self.task2()
#         self.task3()
#     def task1(self):
#         print('Boil milk and tea powder for 5 minutes...', end='')
#         sleep(5)
#         print('Done')
#     def task2(self):
#         print('Add sugar and boil for 3 minutes...', end='')
#         sleep(3)
#         print('Done')
#     def task3(self):
#         print('Filter it and serve...', end='')
#         print('Done')
# # create an instance to our class
# obj = MyThread()
# # create a thread and run prepareTea method 
# # of obj
# t = Thread(target=obj.prepareTea)
# t.start()



# from threading import *
# from time import *
# class Theatre:
#     # constructor that accepts a string
#     def __init__(self, str):
#         self.str = str
#     # a method that represents for 5 tickets
#     def movieshow(self):
#         for i in range(1, 6):
#             print(self.str," : ",i)
#             sleep(1)
# # create two instances to Theatre class
# obj1 = Theatre('Cut ticket')
# obj2 = Theatre('Show chair')
# # create two threads to run movieshow()
# t1 = Thread(target=obj1.movieshow)
# t2 = Thread(target=obj2.movieshow)
# # run the threads
# t1.start()
# t2.start()
# t1.join()
# t2.join()

# while True:
#     try:
#         x = int(input("Please enter a number: "))
#         break
#     except ValueError:
#          print("Oops! That was no valid number. Try again...")


# try: 
#     fh = open("testfile", "r") 
#     fh.write("This is my test file for exception handling!!") 
# except IOError: 
#     print ("Error: can\'t find file or read data")
# else:
#     print ("Written content in the file successfully")
#     fh.close()

# try: 
#     fh = open("testfile", "w") 
#     fh.write("This is my test file for exception handling!!")
# finally: 
#     print ("Error: can\'t find file or read data")


# def divied (a,b):
#     try:
#         c=a/b
#     except ZeroDivisionError:
#         print("you are dividing by zero")
#     else:
#         print(c)
#         print("division successful")
        
#     finally:
#         print("i am finally clause")

# divied(10,5)
# divied(10,0)


# import sys
# randomList = [ 10, 2]

# for entry in randomList:
#     try:
#         print("The entry is", entry)
#         r = 1/int(entry)
#         break
#     except Exception as e:
#         print("Oops!", e.__class__, "occurred.")
#         print("Next entry.")
#         print()
# print("The reciprocal of", entry, "is", r)


# try:
#     a = int(input("Enter a positive integer: "))
#     if a <= 0:
#         raise ValueError("That is not a positive number!")
# except exception as ve:
#     print(ve.__class__, ve)


# print(list(range(2, 20, 3)))
# print(list(range(10)))
# print(range(10))



# quantity = 3
# itemno = 567
# price = 49
# myorder = "I want {0} pieces of item number {1} for {2:.3f} dollars."
# print(myorder.format(quantity, itemno, price))

# my_set = {}
# print(my_set)

# thisset = {"apple", "banana", "cherry"}
# mylist = ["kiwi", "orange"]
# thisset.update(mylist)
# print(thisset)
# my_set = {1, 3}
# my_set.update([4, 5], {1, 6, 8})
# print(my_set)

# thisset = {"apple", "banana", "cherry"}
# thisset.discard("banana")
# print(thisset)

# x = {"apple", "banana", "cherry"}
# y = {"google", "microsoft", "apple"}
# x.symmetric_difference_update(y)
# print(x)

# car = { "brand": "Ford", "model": "Mustang", "year": 1964 }
# x = car.keys()
# print(x) #before the change
# car["color"] = "white"
# print(x) #after the change
# print(car)

# car = { "brand": "Ford", "model": "Mustang", "year": 1964 }
# x = car.items()
# print(x) #before the change

# vowels keys
# keys = {'a', 'e', 'i', 'o', 'u' }
# value = [1]
# vowels = dict.fromkeys(keys, value)
# print(vowels)
# # updating the value
# value.append(2)
# print(vowels)

#without comprehension
# fruits = ["apple", "banana", "cherry", "kiwi", "mango"]
# newlist = []
# for x in fruits:
#     if "a" in x:
#         newlist.append(x)
# print(newlist)


# def myfunc(name):
#     """The function returns the name"""
#     print("heloo my name is"+ name +"my age")

# myfunc("priyanshu")
# print(myfunc.__doc__)

# def my_function(child3, child2, child1):
#     print("The youngest child is " + child3)
# my_function(child1 = "Emil", child2 = "Tobias", child3 = "Linus")

# def my_function(country = "India"):
#     print("I am from " + country)
# my_function("Sweden")
# my_function("USA")
# my_function()
# my_function("Brazil")

# c = 1 # global variable
# def add():
#     global c
#     c = c + 2 # increment c by 2
#     print(c)
# print(c)
# add()


# def devision(a,b):
#     try:
#         c = a/b
#     except Exception as e:
#         print(e.__class__,e)
        
#     else:
#         print(c)
#         print("division successful")
    
#     finally:
#         print("i am finally clause")

# devision(10,5)
# devision(10,0)

# try:
#     a = int(input("Enter a positive integer: "))
#     if a <= 0:
#         raise ValueError("That is not a positive number!")
# except ValueError as ve:
#     print(ve.__class__, ve)

# class Error(Exception):
#     """Base class for other exceptions"""
#     pass
# class ValueTooSmallError(Error):
#     """Raised when the input value is too small"""
#     pass
# class ValueTooLargeError(Error):
#     """Raised when the input value is too large"""
#     pass

# number = 10
# while True:
#     try:
#         x = int(input("Please enter a number: "))
 
#         if x<number:
#             raise ValueTooSmallError
#         elif x>number:
#             raise ValueTooLargeError
#         break
#     except ValueTooSmallError:
#         print("This value is too small, try again!")
#         print()
#     except ValueTooLargeError:
#         print("This value is too large, try again!")
#         print()
# print("Congratulations! You guessed it correctly.")


# class Myclass:
#     a = 10
#     def __init__(self,lname,fname,age):
#         self.firstname = fname
#         self.lastname = lname
#         # self.__age = age

#         print("this is constructor")
#     def display(self):
#         print("my last name is " + self.lname)
#         print("my first name is " + self.fname)
#         # print("my age is " + str(self.__age))
#     def setMaxage(self,age):
#         self.__age= age

# obj1 = Myclass("patel","priyanshu",27)
# print(obj1.a)
# print(obj1.firstname)

# obj1.firstname = "legend"
# obj1.display()

# print(obj1.firstname)
# print(obj1._Myclass__age)
# # print(obj1._Myclass__lastname)
# obj1.setMaxage(1000)

# class son(Myclass):
#     def __init__(self,lname,fname):
#         self.lname=lname
#         self.fname=fname
    
# obj2 = son("priy","ksd")
# obj2.display()


# from abc import ABC

# class car(ABC):
#     def display():
#         pass

# class motor(car):
#     def display(self):
#         print("this is motor")

# class cycle(car):
#     def display(self):
#         print("this is cycle")

# obj1 = motor()
# obj1.display()
# obj2 = cycle()
# obj2.display()
# # obj3 = car()
# # obj3.display()

# class Person:
#     name = "John"
#     age = 36
#     country = "Norway"

# x = getattr(Person, 'age')
# print(x)

# class Person:
#     name = "John"
#     age = 36
#     country = "Norway"
# x = getattr(Person, 'age', 'country')
# print(x)

# class Person:
#     name = "John"
#     age = 36
#     country = "Norway"
# setattr(Person, 'age', 40)
# x = getattr(Person, 'age')
# print(x)


# def diplay(*args):
#     for i in args:
#         print(i)

# diplay(1,2)
# diplay(1,2,3,4,5,6,7,8,9,10)

# def add(instanceOf,*args):
#     if instanceOf=='int':
#         result=0
#     if instanceOf=='str':
#          result=''
#     for i in args:
#      result+=i
#     return result
# print(add('int',3,4,5))
# print(add('str','I ','speak ','Python'))

# class A:
#     def first(self):
#         print("First function of class A")
#     def second(self):
#         print('Second function of class A')
#     # Derived Class
# class B(A):
#     # Overriden Function
#     def first(self):
#         print("Redefined function of class A in class B")
#         print(self.__class__)
#     def display(self):
#         print('Display Function of Child class')
# # Driver Code
# # Creating child class object
# child_obj = B()
# # Calling the overridden method
# print("Method Overriding\n")
# child_obj.first()
# # Calling the original Parent class method
# # Using parent class object.
# A().first()

# a = [10,20,30]
# a = tuple(a)
# a[0]=100
# print(a)

# example =["left","right","up","down"] 
# print(example[3:])

# number = [5,10,15,20]

# x = reduce(lambda x,y: x+y, number)

# print(x)

# s = '    Hello world! '
# print("s[-5:-2] = ", s [-5:-2])
# print(s)
# a=s.split()
# print(a)

# s1 = 'abc'
# s2 = '123'
# print('s1.join(s2):', s1.join(s2))
# print('s2.join(s1):', s2.join(s1))


# try:
#     fh = open("testfile", "r")
#     fh.write("This is my test file for exception handling!!")
# except IOError:
#     print("Error: can\'t find file or read data")
    
# else:
#     print("Written content in the file successfully")
#     fh.close()
# finally:
#     print("i am finally clause")


# x = lambda a : a + 10
# print(x(5))

# class Person:
#     def __init__(self, fname, lname):
#         self.fname = fname
#         self.lname = lname
#         print("your are in parent class")
#     def printname(self):
#         print(self.fname, self.lname)
# class Student(Person):
#     def __init__(self, fname, lname):
#         #Person.__init__(self, fname, lname)
#         super(). __init__(fname, lname)
#         self.fname = fname
#         self.lname = lname
#         print("Hi",self.fname)
#     def printname(self):
#         print ("this is child")
#         super().printname()
# x = Student("John", "Doe")
# x.printname()
# y = Person("Johny", "Drew")
# y.printname()


# print(("sjcj") + ("jsnd"))

# class MyNumbers:

#     def __iter__(self):
#         self.a = 1
#         return self

#     def __next__(self):
#         if self.a <= 5:
#             x = self.a

#             self.a += 1
#             return x
#         else:
#             raise StopIteration

# myclass = MyNumbers()

# myiter = iter(myclass)

# for x in myiter:
#     print(x)

# from threading import *
# import threading
# from time import *

# class mythread:
#     def pretea(self):
#         self.task1()
#         self.task2()
#         self.task3()
#     def task1(self):
#         print("boil milk and tea powder for 5 min")
#         print(threading.current_thread().name)
#         sleep(5)
#         print("done")
#     def task2(self):
#         print("add sugar and boil for 3 min")
#         sleep(3)
#         print("done")
#     def task3(self):
#         print("filter it and serve")
#         print("done")

# obj = mythread()
# t =Thread(target=obj.pretea)
# t.start()
# t.join()

from threading import *
from time import *
class Theatre:
    # constructor that accepts a string
    def __init__(self, str):
        self.str = str
    # a method that represents for 5 tickets
    def movieshow(self):
        for i in range(1, 6):
            print(self.str," : ",i)
            sleep(1)
# create two instances to Theatre class
obj1 = Theatre('Cut ticket')
obj2 = Theatre('Show chair')
# create two threads to run movieshow()
t1 = Thread(target=obj1.movieshow)
t2 = Thread(target=obj2.movieshow)
# run the threads
t1.start()

t1.join()
t2.start()
t2.join()



# from abc import ABC,abstractmethod


# class Myclass(ABC):
#     @abstractmethod
#     def display(self):
#         pass
#     def display1(self):
#         print("this is display1")

# class motor(Myclass):
#     def display(self):
#         print("this is motor")

# class cycle(Myclass):
#     def display(self):
#         print("this is cycle")

# obj1 = motor()
# obj1.display()
# obj2 = cycle()
# obj2.display()
# obj2.display1()

# s1 = 'abc'
# s2 = '123'
# print('s1.join(s2):', s1.join(s2))

# thisdict = { "brand": "Ford", "model": "Mustang", "year": 1964}
# for x in thisdict:
#     print(x)
# #Printing values
# for x in thisdict:
#     print(thisdict[x])

# def my_function(*kids):
#     print("The youngest child is " + kids[2])
# my_function("Emil", "Tobias", "Linus")
# def my_function(child3, child2, child1):
#     print("The youngest child is " + child3)
# my_function(child1 = "Emil", child2 = "Tobias", child3 = "Linus")

# class z(object):
#     def display(self):
#         print("this is z")
# class y:
#     def display(self):
#         print("this is y")
# class x(z):
#     def display(self):
#         print("this is x")
#         super().display()

# class p(x,y):
#     def display(self):
#         print("this is p")
#         super().display()

# obj1 = p()
# obj1.display()
