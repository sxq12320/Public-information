from manim import *
from manim.utils.color.X11 import LIGHTBLUE
from manim.utils.color.XKCD import LIGHTRED, LIGHTGREEN

config.frame_width = 32
config.frame_height = 18
config.background_color = BLACK
config.pixel_height = 1080
config.pixel_width = 1920

def chaper3_input():
    global chaper3_input1_1
    global chaper3_input2_1
    global chaper3_input2_2
    global chaper3_input3_1

    chaper3_input1_1 = Text("import torch",
                            color=GREEN, font_size=50).move_to((-10.5, 5, 0))
    chaper3_input2_1 = Text("x = torch.arange(12)",
                            color=GREEN, font_size=50).next_to(chaper3_input1_1, DOWN,
                                                                                       aligned_edge=LEFT)
    chaper3_input2_2 = Text("print(x)",
                            color=GREEN, font_size=50).next_to(chaper3_input2_1, DOWN, aligned_edge=LEFT)

    chaper3_input3_1 = Text("x.shape",
                            color=GREEN, font_size=50).next_to(chaper3_input2_1, DOWN, aligned_edge=LEFT)


def chaper3_output():
    global chaper3_output1_1
    global chaper3_output2_1
    global chaper3_output3_1

    chaper3_output1_1 = Text("导入pytorch库",
                             color=RED, font_size=50).move_to((4.5, 5, 0))

    chaper3_output2_1 = MathTex(r"tensor([ 0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11])",
                                color=RED,font_size=50).next_to(chaper3_output1_1, DOWN, aligned_edge=LEFT)

    chaper3_output3_1 = MathTex(r"torch.Size([12])",
                                color=RED,font_size=50).next_to(chaper3_output1_1, DOWN, aligned_edge=LEFT)


class Test(Scene):
    def construct(self):
        plane = NumberPlane(x_range=(-100,100),y_range=(-100,100))
        # self.add(plane)
        chaper3 = Text("第三章 数组的操作", color=WHITE, font_size=120)
        self.play(Write(chaper3))
        chaper3_title = Text("第三章 数组的操作", color=WHITE, font_size=40).to_edge(UL, buff=1)
        self.play(ReplacementTransform(chaper3, chaper3_title))
        self.wait(1)

        chaper3_rctangle_1 = Rectangle(width=11,height=12,fill_opacity=0.3,color=LIGHTBLUE,stroke_width=5,stroke_color=WHITE).to_edge(LEFT,buff=3)
        chaper3_rctangle_2 = Rectangle(width=11,height=12,fill_opacity=0.3,color=LIGHTBLUE,stroke_width=5,stroke_color=WHITE).to_edge(RIGHT,buff=3)
        self.play(
            FadeIn(chaper3_rctangle_1),
            FadeIn(chaper3_rctangle_2),
        )
        chaper3_input()

        chaper3_output()

        self.play(
            Write(chaper3_input1_1)
        ),self.wait(1)

        self.play(
            Write(chaper3_output1_1)
        ),self.wait(2)

        self.play(
            FadeOut(chaper3_output1_1),
            Write(chaper3_input2_1),
            Write(chaper3_input2_2)
        ),self.wait(2)

        self.play(
            Write(chaper3_output2_1)
        ),self.wait(2)

        self.play(
            FadeOut(chaper3_output2_1),
            FadeOut(chaper3_input2_2),
            Write(chaper3_input3_1)
        ),self.wait(2)

        self.play(
            Write(chaper3_output3_1)
        ),self.wait(2)

        self.play(
            FadeOut(chaper3_input3_1),
            FadeOut(chaper3_output3_1),
        ),self.wait(2)










