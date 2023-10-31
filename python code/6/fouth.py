class A:
    def Call(self):
        print("Call method in class A")


class B(A):
    def Call(self):
        super().Call()
        print("Call method in class B")


class C(A):
    def Call(self):
        super().Call()
        print("Call method in class C")


class D(B, C):
    def Call(self):
        super().Call()
        print("Call method in class D")


if __name__ == "__main__":
    obj_d = D()
    obj_d.Call()

