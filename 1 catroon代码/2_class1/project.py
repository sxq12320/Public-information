from isapi.samples.advanced import custom_arg_handlers
from manim import *
from scipy.signal import square

config.frame_width = 32
config.frame_height = 18
config.background_color = BLACK
config.pixel_height = 1080
config.pixel_width = 1920

global M_YELLOW
global M_RED
global M_GREEN
global M_BLUE
global M_BLACK
global M_PURPLE
global M_WHITE

global MY_BUFF
MY_BUFF = 3

global MY_FONTSIZE
MY_FONTSIZE=60

M_YELLOW = "#ebce20"
M_RED = "#a41466"
M_GREEN = "#6cc1a5"
M_BLUE = "#3595d3"
M_BLACK = BLACK
M_PURPLE = "#833d93"
M_WHITE = WHITE

class class1 (Scene):
    def construct(self):
        # 设置背景颜色
        self.camera.background_color = M_BLACK

        #章节标题加载
        self.ST_title()
        self.chaper1()
        # self.chaper2()
        # self.chaper3()
        self.chaper1_play()




    def chaper1_play(self):
        self.play(
            Write(self.title_chaper1)
        ),self.wait(1)
        self.play(
            ReplacementTransform(self.title_chaper1, self.chaper1_title)
        ),self.wait(1)
        self.play(
            Write(self.chaper1_text1)
        ),self.wait(1)
        self.play(Write(self.chaper1_squares),FadeOut(self.chaper1_text1)),self.wait(1)
        self.play(Write(self.chaper1_text2)),self.wait(1)
        self.play(Write(self.chaper1_numbers),FadeOut(self.chaper1_text2)),self.wait(1)
        self.play(Write(self.chaper1_text3)),self.wait(1)
        self.play(FadeOut(self.chaper1_text3)),self.wait(1)

        self.play(Write(self.chaper1_select1_text)),self.wait(1)
        self.play(
            self.chaper1_select1_squares.animate.set_fill(color=M_YELLOW, opacity=0.8),
            self.chaper1_select1_numbers.animate.set_color(WHITE)
        ),self.wait(2)
        self.play(
            FadeOut(self.chaper1_select1_numbers),
            self.chaper1_select1_squares.animate.set_fill(color=M_BLUE, opacity=0.5)
        ),self.wait(2)

        self.play(Write(self.chaper1_select2_text)),self.wait(1)
        self.play(
            self.chaper1_select2_squares.animate.set_fill(color=M_YELLOW, opacity=0.8),
            self.chaper1_select2_numbers.animate.set_color(WHITE)
        ), self.wait(2)
        self.play(
            FadeOut(self.chaper1_select2_numbers),
            self.chaper1_select2_squares.animate.set_fill(color=M_BLUE, opacity=0.5)
        ),self.wait(2)

        self.play(Write(self.chaper1_select3_text)), self.wait(1)

        self.play(
            self.chaper1_select3_squares.animate.set_fill(color=M_YELLOW, opacity=0.8),
            self.chaper1_select3_numbers.animate.set_color(WHITE)
        ), self.wait(2)
        self.play(
            FadeOut(self.chaper1_select3_numbers),
            self.chaper1_select3_squares.animate.set_fill(color=M_BLUE, opacity=0.5)
        ),self.wait(2)

        self.play(Write(self.chaper1_select4_text)), self.wait(1)
        self.play(
            self.chaper1_select4_squares.animate.set_fill(color=M_YELLOW, opacity=0.8),
            self.chaper1_select4_numbers.animate.set_color(WHITE)
        ), self.wait(2)
        self.play(
            FadeOut(self.chaper1_select4_numbers),
            self.chaper1_select4_squares.animate.set_fill(color=M_BLUE, opacity=0.5)
        ),self.wait(2)


















######################################标题函数############################################
    def ST_title(self):
        self.title_chaper1 = MathTex(
            r"\text{第一章 \quad 数组元素的提取}",
            tex_template=TexTemplateLibrary.ctex,
            font_size=120,
            color=M_WHITE
        )

        self.title_chaper2 = MathTex(
            r" \text{第二章 \quad pytorch的基本使用}",
            tex_template=TexTemplateLibrary.ctex,
            font_size = 120,
            color = M_WHITE
        )

        self.title_chaper3 = MathTex(
            r"\text{第三章 \quad 数据的预处理}",
            tex_template=TexTemplateLibrary.ctex,
            font_size = 120,
            color = M_WHITE
        )

        self.chaper1_title = self.title_chaper1.copy().move_to((-11,7,0)).scale(0.5)
        self.chaper2_title = self.title_chaper2.copy().move_to((-11,7,0)).scale(0.5)
        self.chaper3_title = self.title_chaper3.copy().move_to((-11,7,0)).scale(0.5)

    ######################################第一章函数############################################
    def chaper1(self):
        boxs = []
        numbers = []
        self.chaper1_text1 = MathTex(
            r"\text{首先我们先绘制一个} 4 \times 4 \text{的矩阵}",
            tex_template=TexTemplateLibrary.ctex,
            font_size=40,
            color=M_WHITE
        ).next_to(DOWN , buff = 3)

        for i in range(4):#行
            for j in range(4):#列
                box = Square(#创建矩阵
                    side_length = 2 ,
                    stroke_width= 2,
                    stroke_color=M_WHITE,
                    fill_opacity = 0.5,
                    fill_color =M_BLUE
                )
                box.move_to((-3+2*j , 3-2*i , 0))
                boxs.append(box)

                num =Integer(#创建数字
                    3*i+j+1,
                    color = BLACK,
                    font_size=60
                )
                num.move_to(box.get_center())
                numbers.append(num)
        self.chaper1_numbers = VGroup(*numbers)
        self.chaper1_squares = VGroup(*boxs)

        self.chaper1_select1_squares = self.chaper1_squares[6].copy()#提取一个元素
        self.chaper1_select1_numbers = self.chaper1_numbers[6].copy()

        self.chaper1_select2_squares = VGroup()#提取一行元素
        self.chaper1_select2_numbers = VGroup()
        for i in range(4):
            self.chaper1_select2_squares.add(self.chaper1_squares[4+i].copy())
            self.chaper1_select2_numbers.add(self.chaper1_numbers[4+i].copy())

        self.chaper1_select3_squares = VGroup()#提取一列元素
        self.chaper1_select3_numbers = VGroup()
        for i in range(4):
            self.chaper1_select3_squares.add(self.chaper1_squares[2+4*i].copy())
            self.chaper1_select3_numbers.add(self.chaper1_numbers[2+4*i].copy())

        self.chaper1_select4_squares = VGroup()#提取一个元素快
        self.chaper1_select4_numbers = VGroup()
        for i in range(2):
            for j in range(3):
                self.chaper1_select4_squares.add(self.chaper1_squares[(i+1)*4+j+1].copy())
                self.chaper1_select4_numbers.add(self.chaper1_numbers[(i+1)*4+j+1].copy())

        self.chaper1_text1 = MathTex(
            r"\text{首先让我们先绘制一个} 4 \times 4 \text{的矩阵}",
            tex_template=TexTemplateLibrary.ctex,
            font_size=MY_FONTSIZE,
            color=M_WHITE
        ).to_edge(DOWN,buff = MY_BUFF)

        self.chaper1_text2 = MathTex(
            r"\text{让我们给这些方块标上序号}",
            tex_template=TexTemplateLibrary.ctex,
            font_size=MY_FONTSIZE,
            color=M_WHITE
        ).to_edge(DOWN,buff = MY_BUFF)

        self.chaper1_text3 = MathTex(
            r"\text{让我们看看如何进行数组元素的提取吧}",
            tex_template=TexTemplateLibrary.ctex,
            font_size=MY_FONTSIZE,
            color=M_WHITE
        ).to_edge(DOWN,buff = MY_BUFF)

        self.chaper1_select1_text = MathTex(
            r"\text{首先是一个元素的提取} : [1,2] ",
            tex_template=TexTemplateLibrary.ctex,
            font_size=MY_FONTSIZE,
            color=M_WHITE
        ).to_edge(DOWN,buff = MY_BUFF)

        self.chaper1_select2_text = MathTex(
            r"\text{再来对一行元素进行提取} : [1,:] ",
            tex_template=TexTemplateLibrary.ctex,
            font_size=MY_FONTSIZE,
            color=M_WHITE
        ).to_edge(DOWN,buff = MY_BUFF)

        self.chaper1_select3_text = MathTex(
            r"\text{其次对一列元素进行提取} : [:,2] ",
            tex_template=TexTemplateLibrary.ctex,
            font_size=MY_FONTSIZE,
            color=M_WHITE
        ).to_edge(DOWN,buff = MY_BUFF)

        self.chaper1_select4_text = MathTex(
            r"\text{最后让我们尝试对其中的子元素块进行提取} : [1:3 , 1 , :] ",
            tex_template=TexTemplateLibrary.ctex,
            font_size=MY_FONTSIZE,
            color=M_WHITE
        ).to_edge(DOWN,buff = MY_BUFF)



######################################第二章函数############################################
    # def chaper2(self):


######################################第三章函数############################################
    # def chaper3(self):
