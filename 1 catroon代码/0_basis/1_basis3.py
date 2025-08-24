from manim import *
from networkx.algorithms.bipartite.basic import color
from scipy.signal import square


class FirstExample(Scene):
    def construct(self):
        plane = NumberPlane()
        self.add(plane)

        #next_to epsiode 1
        red_dot = Dot(color=RED)
        green_dot = Dot(color=GREEN)
        green_dot.next_to(red_dot,RIGHT*10)  #RIGHT = [1,0,0]
        self.add(red_dot,green_dot)

        #shift
        s = Square(color=YELLOW)
        s.shift(2*UP+4*RIGHT)
        self.add(s)

        #move_to
        c = Circle(color = RED)
        c.move_to([-3,-2,0])
        self.add(c)

        #align_to
        c2 = Circle(radius=0.5,color = RED , fill_opacity=0.5)
        c3 = c2.copy().set_color(PURPLE)
        c4 = c2.copy().set_color(YELLOW)
        c2.align_to(s,UP)
        c3.align_to(s,RIGHT)
        c4.align_to(s,DOWN+RIGHT)
        self.add(c2,c3,c4)

class SecondExample(Scene):
    def construct(self):
        ax = Axes(x_range=(-5,5),y_range=(-5,5))
        plane = NumberPlane()
        self.add(ax,plane)

        c = Circle(color = GREEN , fill_opacity=0.5)
        self.add(c)

        for d in [(0,0,0),UP,UR,RIGHT,DR,DOWN,DL,LEFT,UL]:
            x = Cross(scale_factor=0.2) #十字架
            x.move_to(c.get_critical_point(d)) #c的重要位置坐标
            self.add(x)

        s = Square(color=RED , fill_opacity=0.5)
        s.move_to([1,0,0],aligned_edge=UP)
        self.add(s)

from manim.utils.unit import Percent,Pixels

class ThirdExample(Scene):
    def construct(self):
        for perc in range(5,51,5):
            self.add(Circle(radius=perc*Percent(X_AXIS)))
            self.add(Square(side_length=2*perc*Percent(Y_AXIS),color=YELLOW))

        d = Dot()
        d.shift(100*Pixels * RIGHT)
        self.add(d)

#group operate
class Grouping(Scene):
    def construct(self):
        red_dot = Dot(color=RED)
        green_dot=Dot(color=GREEN).next_to(red_dot,RIGHT)
        blue_dot=Dot(color=BLUE).next_to(red_dot,UP)
        dot_group=VGroup(red_dot,green_dot,blue_dot)
        dot_group.to_edge(RIGHT+DOWN)
        self.add(dot_group)

        circle = VGroup(*[Circle(radius = 0.2) for _ in range(10)])
        circle.arrange(UP,buff = 0.5)
        self.add(circle)

        star = []
        for i in range(0,20,1):
            star.append(Star(color = YELLOW , fill_opacity=0.5).scale(0.5))
        stars = VGroup(star)
        stars.arrange_in_grid(4,5,buff = 0.2)
        # stars.move_to([0,-3,0])
        self.add(stars)
