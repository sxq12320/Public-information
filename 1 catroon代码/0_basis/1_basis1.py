from importlib.util import set_loader

from manim import *
class Test1(Scene):
    def construct(self):
        line1 = Text("Hello World 我很喜欢这个世界",font_size=36,color=RED)
        line2 = Text("我好讨厌这个世界" ,font_size=36,color=RED)
        add = VGroup(line1,line2).arrange(DOWN,aligned_edge=RIGHT , buff=1)
        self.play(Write(add,run_time=3))
        self.wait(2)

class Test2(Scene):
    def construct(self):
        # 创建两行文本
        line1 = Text("1. 我喜欢这个世界", font_size=36)
        line2 = Text("2. 今天是学习的第一天", font_size=36)
        lines = VGroup(line1, line2).arrange(DOWN, aligned_edge=LEFT, buff=0.5)
        # 显示文本
        self.play(Write(lines,run_time=3), run_time=2)
        self.wait(1)  # 暂停1秒
        # 淡出效果
        self.play(FadeOut(lines))  # 同时淡出两行
        self.wait()

class CircleDemo(Scene):
    def construct(self):
        # 方法1：直接创建圆（静态）
        circle1 = Circle(radius=1.5, color=BLUE)
        text_1 = Text("this is a circle",font_size = 36 ,color = WHITE)
        text_2 = Text("Now we will explain the circle for some seconds",font_size = 36 ,color = WHITE)
        text_1.next_to(circle1,UP,buff = 0.5)
        center_dot = Dot(color=RED)
        self.play(Create(circle1),Write(text_1))
        self.wait(0.5)
        self.play(FadeIn(center_dot))
        self.wait(1.5)
        self.play(FadeOut(circle1),FadeOut(text_1))
        self.play(Write(text_2))
        self.wait(2)
