from tkinter.constants import CENTER
from tokenize import Number

import numpy as np
from manim import *
from networkx.algorithms.distance_measures import radius

config.background_color = BLACK

config.pixel_height = 1080
config.pixel_width = 1920
config.frame_width = 30
config.frame_height = 20

class TEXT(Scene):
    def construct(self):
        palne = NumberPlane(x_range=(-6,6) , y_range=(-6,6))
        t=Triangle(color=BLUE , fill_opacity=0.5)
        tex1 = Text("Hello World!" , color=WHITE , font_size=50)
        tex2 = Text("Goodbbye World!",color=WHITE,font_size=30).next_to(tex1,DOWN)
        self.add(tex1,tex2)

from manim.utils.unit import Pixels,Percent
class FirstExample(Scene):
    def construct(self):
        texs = []
        polys=[]
        for i in range(0,5,1):
            polys.append(RegularPolygon(5,radius = 1,fill_opacity=0.5))

        Text.set_default(color=WHITE , font_size = 20)
        texs.append(Text("linear x=t"))
        texs.append(Text("default smooth"))
        texs.append(Text("f(x) x=sin(t)"))
        texs.append(Text("function there_and_back"))
        texs.append(Text("f(x) 1-abs(1-2t)"))

        polys[0].move_to((-6,0,0)).set_color(color = YELLOW)
        polys[1].move_to((-3,0,0)).set_color(color = RED)
        polys[2].move_to((0,0,0)).set_color(color = GREEN)
        polys[3].move_to((3, 0, 0)).set_color(color = PURPLE)
        polys[4].move_to((6, 0, 0)).set_color(color = BLUE)

        texs[0].move_to((-6,1.5,0))
        texs[1].move_to((-3, 1.5, 0))
        texs[2].move_to((0, 1.5, 0))
        texs[3].move_to((3, 1.5, 0))
        texs[4].move_to((6, 1.5, 0))

        self.play(
            Write(texs[0]),
            Write(texs[1]),
            Write(texs[2]),
            Write(texs[3]),
            Write(texs[4]),
            run_time=2
        )
        self.play(
            DrawBorderThenFill(polys[0]),
            DrawBorderThenFill(polys[1]),
            DrawBorderThenFill(polys[2]),
            DrawBorderThenFill(polys[3]),
            DrawBorderThenFill(polys[4]),
            run_time = 2
        )

        self.play(
            Rotate(polys[0],PI,rate_func=lambda t: t), #linear
            Rotate(polys[1], PI, rate_func=smooth), #default behavior
            Rotate(polys[2], PI, rate_func=lambda t: np.sin(t*PI)),
            Rotate(polys[3], PI, rate_func=there_and_back),
            Rotate(polys[4], PI, rate_func=lambda t:1-abs(1 - 2*t)),
            run_time = 2
        )
        self.wait(2)

class SecondExample(Scene):
    def construct(self):
        s = []
        for i in range(0,20,1):
            s.append(Square(fill_opacity=0.5,color = BLUE))
        s[0].set_color(color = ManimColor("#C9E2AE"))

        s = VGroup(s).arrange_in_grid(4,5).scale(0.75)
        self.play(AnimationGroup(*[FadeIn(i) for i in s], lag_ratio=0.05))

class ThirdExample(Scene):
    def construct(self):
        s = Square(color = GREEN ,fill_opacity=0.5)
        c= Circle(color = BLUE ,fill_opacity=0.5)
        self.add(s,c)
        self.play(s.animate.shift(UP),c.animate.shift(DOWN))
        self.play(VGroup(s,c).animate.arrange(RIGHT,buff=3))
        self.play(c.animate(rate_functions = linear).shift(DOWN).scale(2))

class FourthExample(Scene):
    def construct(self):
        # 调整 x_step 和 y_step 使格子更密

        plane = NumberPlane(
            x_range=(-100, 100, 1),  # x 轴范围 (-10, 10)，步长 1
            y_range=(-100, 100, 1),  # y 轴范围 (-10, 10)，步长 1
        )
        self.add(plane)


        circle = Circle(radius=1,fill_opacity=0.5,color = BLUE)
        area_label = MathTex(r"A = \pi r^2").next_to(circle, DOWN)
        self.play(Write(area_label))
        self.play(DrawBorderThenFill(circle))
        self.wait(2)
        self.play(circle.animate.shift((-3,0,0)).scale(0.5))
