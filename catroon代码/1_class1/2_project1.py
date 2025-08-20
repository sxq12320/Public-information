#class1 DEEPLEARNING
#数据结构之类的函数解释
from PIL.ImageOps import scale
from manim import *
from networkx.algorithms.bipartite.basic import color

config.frame_width = 32
config.frame_height = 18
config.background_color = BLACK
config.pixel_height = 1080
config.pixel_width = 1920

class Class_1(Scene):
    def construct(self):

        # plane = NumberPlane(x_range=(-100,100,1),y_range=(-100,100,1))
        # self.add(plane)

        ########################数组的介绍#################################################################数组的介绍#########################################
        chaper1 = Text("第一章 数组的介绍" ,color = WHITE , font_size=120)
        self.play(Write(chaper1))
        self.wait(2)
        chaper1_title = Text("第一章 数组的介绍", color=WHITE, font_size=40).to_edge(UL, buff=1)
        self.play(ReplacementTransform(chaper1, chaper1_title))
        self.wait(1)

        chaper1_img_1 = Square(color = BLUE , fill_opacity=0.5).stretch_to_fit_width(1).stretch_to_fit_height(1).move_to((0,0,0))
        chaper1_text_1 = Text("零维 一个类别",color = WHITE , font_size=60).next_to(chaper1_img_1,DOWN,buff=2)
        chaper1_text_1=MathTex(r"\text{零维 \quad 一个类别}",tex_template=TexTemplateLibrary.ctex,font_size=60,color=WHITE).next_to(chaper1_img_1,DOWN,buff=0.5)

        chaper1_img_2 = Square(color = BLUE , fill_opacity=0.5).stretch_to_fit_width(20).stretch_to_fit_height(1).move_to((0,0,0))
        chaper1_text_2 = Text("一维-一个特征向量",color = WHITE , font_size=60).next_to(chaper1_img_2,DOWN,buff=2)
        chaper1_text_2 = MathTex(r"\text{一维 \quad 一个特征向量}", tex_template=TexTemplateLibrary.ctex, font_size=60,color=WHITE).next_to(chaper1_img_2,DOWN,buff=0.5)

        chaper1_img_3 = Square(color = BLUE , fill_opacity=0.5).stretch_to_fit_width(10).stretch_to_fit_height(10).move_to((0,0,0))
        chaper1_text_3 = Text("二维 一个样本-特征矩阵",color = WHITE , font_size=60).next_to(chaper1_img_3,DOWN,buff=2)
        chaper1_text_3 = MathTex(r"\text{二维 \quad 一个样本 \quad 特征矩阵}", tex_template=TexTemplateLibrary.ctex, font_size=60,color=WHITE).next_to(chaper1_img_3,DOWN,buff=0.5)

        front_vertices1 = [
            [-1, -1, 0],  # 左下
            [1, -1, 0],  # 右下
            [1, 1, 0],  # 右上
            [-1, 1, 0]  # 左上
        ]
        up_vertices1 = [
            [-1, 1, 0],
            [0, 2, 0],
            [2, 2, 0],
            [1, 1, 0]
        ]
        right_vertices1 = [
            [1,1,0],
            [2,2,0],
            [2,0,0],
            [1,-1,0]
        ]
        front_face1 = Polygon(*front_vertices1, color=BLUE, fill_opacity=0.5)
        up_face1 = Polygon(*up_vertices1, color=BLUE, fill_opacity=0.8)
        right_face1 = Polygon(*right_vertices1, color=BLUE, fill_opacity=0.5)

        connecting_lines1 = VGroup([
            Line( front_vertices1[3] , up_vertices1[1] , color=WHITE),
            Line( front_vertices1[2] , up_vertices1[2] , color=WHITE),
            Line( up_vertices1[1] , up_vertices1[2] , color=WHITE),
            Line( front_vertices1[1] , right_vertices1[2] , color=WHITE),
            Line( up_vertices1[2] , right_vertices1[2] , color=WHITE),
            Line(front_vertices1[2],front_vertices1[3],color=WHITE),
            Line(front_vertices1[1],front_vertices1[2] , color=WHITE),
            Line(front_vertices1[0],front_vertices1[3],color=WHITE),
            Line(front_vertices1[0],front_vertices1[1],color=WHITE),
        ])
        chaper1_img_4 = VGroup(front_face1, up_face1,right_face1, connecting_lines1)
        chaper1_text_4 = Text("三维 RGB三色图片 宽x高x通道", color=WHITE, font_size=60).next_to(chaper1_img_4, DOWN, buff=2)
        chaper1_text_4 = MathTex(r"\text{三维 \quad RGB三色图片} \quad \text{宽度} \times \text{高度} \times \text{通道}",
                                 tex_template=TexTemplateLibrary.ctex, font_size=60,color=WHITE).next_to(chaper1_img_4, DOWN, buff=0.5)

        front_vertices2 = [
            [-10, -1, 0],  # 左下
            [10, -1, 0],  # 右下
            [10, 1, 0],  # 右上
            [-10, 1, 0]  # 左上
        ]
        up_vertices2 = [
            [-10, 1, 0],
            [-9, 2, 0],
            [11, 2, 0],
            [10, 1, 0]
        ]
        right_vertices2 = [
            [10, 1, 0],
            [11, 2, 0],
            [11, 0, 0],
            [10, -1, 0]
        ]
        front_face2 = Polygon(*front_vertices2, color=BLUE, fill_opacity=0.5)
        up_face2 = Polygon(*up_vertices2, color=BLUE, fill_opacity=0.8)
        right_face2 = Polygon(*right_vertices2, color=BLUE, fill_opacity=0.5)

        connecting_lines2 = VGroup([
            Line(front_vertices2[3], up_vertices2[1], color=WHITE),
            Line(front_vertices2[2], up_vertices2[2], color=WHITE),
            Line(up_vertices2[1], up_vertices2[2], color=WHITE),
            Line(front_vertices2[1], right_vertices2[2], color=WHITE),
            Line(up_vertices2[2], right_vertices2[2], color=WHITE),
            Line(up_vertices2[2], right_vertices2[2], color=WHITE),
            Line(front_vertices2[2], front_vertices2[3], color=WHITE),
            Line(front_vertices2[1], front_vertices2[2], color=WHITE),
            Line(front_vertices2[0], front_vertices2[3], color=WHITE),
            Line(front_vertices2[0], front_vertices2[1], color=WHITE),
        ])
        chaper1_img_5 = VGroup(front_face2, up_face2,right_face2, connecting_lines2)
        chaper1_text_5 = Text("四维 RGB三色图片的批量视频 批量x宽x高x通道", color=WHITE, font_size=60).next_to(chaper1_img_5, DOWN, buff=2)
        chaper1_text_5 = MathTex(r"\text{四维 \quad RGB三色图片的批量 \quad 视频} \quad \text{宽度} \times \text{高度} \times \text{通道} \times \text{批量}",
                                 tex_template=TexTemplateLibrary.ctex, font_size=60, color=WHITE).next_to(chaper1_img_5, DOWN, buff=0.5)
        front_vertices3 = [
            [-5, -5, 0],  # 左下
            [5, -5, 0],  # 右下
            [5, 5, 0],  # 右上
            [-5, 5, 0]  # 左上
        ]
        up_vertices3 = [
            [-5, 5, 0],
            [-3, 7, 0],
            [7, 7, 0],
            [5, 5, 0]
        ]
        right_vertices3 = [
            [5, 5, 0],
            [7, 7, 0],
            [7, -3, 0],
            [5, -5, 0]
        ]
        front_face3 = Polygon(*front_vertices3, color=BLUE, fill_opacity=0.3)
        up_face3 = Polygon(*up_vertices3, color=BLUE, fill_opacity=0.8)
        right_face3 = Polygon(*right_vertices3, color=BLUE, fill_opacity=0.5)

        connecting_lines3 = VGroup([
            Line(front_vertices3[3], up_vertices3[1], color=WHITE),
            Line(front_vertices3[2], up_vertices3[2], color=WHITE),
            Line(up_vertices3[1], up_vertices3[2], color=WHITE),
            Line(front_vertices3[1], right_vertices3[2], color=WHITE),
            Line(up_vertices3[2], right_vertices3[2], color=WHITE),
            Line(up_vertices3[2], right_vertices3[2], color=WHITE),
            Line(front_vertices3[2], front_vertices3[3], color=WHITE),
            Line(front_vertices3[1], front_vertices3[2], color=WHITE),
            Line(front_vertices3[0], front_vertices3[3], color=WHITE),
            Line(front_vertices3[0],front_vertices3[1], color=WHITE),
        ])
        chaper1_img_6 = VGroup(front_face3, up_face3, right_face3, connecting_lines3)
        chaper1_text_6 = Text("五维 一个视频批量 批量x宽x高x通道x时间", color=WHITE, font_size=60).next_to(chaper1_img_6, DOWN, buff=2)
        chaper1_text_6 = MathTex(
            r"\text{五维 \quad 一个视频批量} \quad \text{宽度} \times \text{高度} \times \text{通道} \times \text{批量} \times \text{时间}",
            tex_template=TexTemplateLibrary.ctex, font_size=60, color=WHITE).next_to(chaper1_img_6, DOWN, buff=0.5)

        self.play(DrawBorderThenFill(chaper1_img_1))
        self.play(Write(chaper1_text_1))
        self.wait(2)
        self.play(FadeOut(chaper1_img_1,chaper1_text_1) )
        self.wait(1)
        self.play(DrawBorderThenFill(chaper1_img_2))
        self.play(Write(chaper1_text_2))
        self.wait(2)
        self.play(FadeOut(chaper1_img_2, chaper1_text_2))
        self.wait(1)
        self.play(DrawBorderThenFill(chaper1_img_3))
        self.play(Write(chaper1_text_3))
        self.wait(2)
        self.play(FadeOut(chaper1_img_3, chaper1_text_3))
        self.wait(1)
        self.play(DrawBorderThenFill(chaper1_img_4))
        self.play(Write(chaper1_text_4))
        self.wait(2)
        self.play(FadeOut(chaper1_img_4, chaper1_text_4))
        self.wait(1)
        self.play(DrawBorderThenFill(chaper1_img_5))
        self.play(Write(chaper1_text_5))
        self.wait(2)
        self.play(FadeOut(chaper1_img_5, chaper1_text_5))
        self.wait(1)
        self.play(DrawBorderThenFill(chaper1_img_6))
        self.play(Write(chaper1_text_6))
        self.wait(2)
        self.play(FadeOut(chaper1_img_6, chaper1_text_6))
        self.wait(1)
        self.play(
            Create(chaper1_img_1.scale(1).move_to((-10,5,0))),
            Write(chaper1_text_1.scale(0.5).move_to((-10,1,0))),
            Create(chaper1_img_2.scale(0.5).move_to((0,5,0))),
            Write(chaper1_text_2.scale(0.5).move_to((0,1,0))),
            Create(chaper1_img_3.scale(0.5).move_to((10,5,0))),
            Write(chaper1_text_3.scale(0.5).move_to((10,1,0))),
            Create(chaper1_img_4.scale(1).move_to((-10,-3,0))),
            Write(chaper1_text_4.scale(0.5).move_to((-10,-7,0))),
            Create(chaper1_img_5.scale(0.5).move_to((0,-3,0))),
            Write(chaper1_text_5.scale(0.5).move_to((0,-7,0))),
            Create(chaper1_img_6.scale(0.5).move_to((10,-3,0))),
            Write(chaper1_text_6.scale(0.5).move_to((10,-7,0))),
        )
        self.wait(2)
        self.play(Indicate(chaper1_img_4, color=DARK_BLUE))
        self.wait(2)
        self.play(Indicate(chaper1_img_5, color=DARK_BLUE))
        self.wait(2)
        self.play(
            FadeOut(chaper1),
            FadeOut(chaper1_img_6),
            FadeOut(chaper1_text_6),
            FadeOut(chaper1_img_5),
            FadeOut(chaper1_text_5),
            FadeOut(chaper1_img_4),
            FadeOut(chaper1_text_4),
            FadeOut(chaper1_img_3),
            FadeOut(chaper1_text_3),
            FadeOut(chaper1_img_2),
            FadeOut(chaper1_text_2),
            FadeOut(chaper1_img_1),
            FadeOut(chaper1_text_1),
            FadeOut(chaper1_title)
        )
        self.wait(1)

        ########################数组的创建#################################################################数组的创建#########################################

        chaper2 = Text("第二章 数组的创建",color=WHITE,font_size = 120)
        self.play(Write(chaper2))
        chaper2_title = Text("第二章 数组的创建", color=WHITE, font_size=40).to_edge(UL, buff=1)
        self.play(ReplacementTransform(chaper2, chaper2_title))
        self.wait(1)
        chaper2_text_0 = Text("数组创建需要什么呢？", color=WHITE, font_size=120).move_to((0, 0, 0))
        chaper2_text_1 = Text("数组的需求", color=WHITE, font_size=80).move_to((0, 0, 0))
        chaper2_text_2 = Text("1.数组的大小形状", color=WHITE, font_size=60).move_to((8, 5, 0))
        chaper2_text_3 = Text("2.元素的数据结构", color=WHITE, font_size=60).move_to((8, 0, 0))
        chaper2_text_4 = Text("3.元素的具体数据", color=WHITE, font_size=60).move_to((8, -5, 0))
        chaper2_arrow_1 = Arrow(start=(-6, 0, 0), end=(5, 5, 0), color=BLUE, stroke_width=5)
        chaper2_arrow_2 = Arrow(start=(-6, 0, 0), end=(5, 0, 0), color=BLUE, stroke_width=5)
        chaper2_arrow_3 = Arrow(start=(-6, 0, 0), end=(5, -5, 0), color=BLUE, stroke_width=5)
        self.play(Write(chaper2_text_0))
        self.wait(2)
        self.play(ReplacementTransform(chaper2_text_0, chaper2_text_1))
        self.wait(2)
        self.play(chaper2_text_1.animate.move_to((-8, 0, 0)),
                  Write(chaper2_text_2),
                  Write(chaper2_text_3),
                  Write(chaper2_text_4),
                  )
        self.wait(0.5)
        self.play(
            GrowFromPoint(chaper2_arrow_1, point=(-6, 0, 0)),
            GrowFromPoint(chaper2_arrow_2, point=(-6, 0, 0)),
            GrowFromPoint(chaper2_arrow_3, point=(-6, 0, 0))
        )
        self.wait(2)
        self.play(Indicate(chaper2_text_2, color=RED)), self.wait(2)
        self.play(Indicate(chaper2_text_3, color=RED)), self.wait(2)
        self.play(Indicate(chaper2_text_4, color=RED)), self.wait(2)
        self.play(
            FadeOut(chaper2_title),
            FadeOut(chaper2_text_0),
            FadeOut(chaper2_text_1),
            FadeOut(chaper2_text_2),
            FadeOut(chaper2_text_3),
            FadeOut(chaper2_text_4),
            FadeOut(chaper2_arrow_1),
            FadeOut(chaper2_arrow_2),
            FadeOut(chaper2_arrow_3),
        )
        self.wait(1)

        ########################数据的操作#################################################################数据的操作#########################################
        chaper3 = Text("第三章 数组的操作",color=WHITE,font_size = 120)
        self.play(Write(chaper3))
        chaper3_title = Text("第三章 数组的操作", color=WHITE, font_size=40).to_edge(UL, buff=1)
        self.play(ReplacementTransform(chaper3, chaper3_title))
        self.wait(1)

