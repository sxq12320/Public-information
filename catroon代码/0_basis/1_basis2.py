import numpy as np
from manim import *
from scipy.signal import square


class FirstExample(Scene):
    def construct(self):
        ax = Axes(x_range=(-3,3),y_range=(-3,3)) #绘制俩个坐标轴
        curve1 = ax.plot(lambda x:(x+2)*x*(x-2)/2,color=RED) #绘制一根曲线
        area = ax.get_area(curve1,x_range=(-2,0)) #坐标轴下面绘制area
        self.play(Create(ax),Create(curve1),run_time = 2) #加上时间的速度了
        self.play(FadeIn(area),run_time = 2)
        self.wait(2)

class SecondExample(Scene):
    def construct(self):
        green_square = Square(color=GREEN,fill_opacity=0.5)
        self.play(DrawBorderThenFill(green_square))
        blue_circle = Circle(color=BLUE,fill_opacity=0.5)
        self.play(ReplacementTransform(green_square,blue_circle))
        self.play(FadeOut(blue_circle),run_time = 1)
        self.play(Indicate(green_square))
        self.wait(2)