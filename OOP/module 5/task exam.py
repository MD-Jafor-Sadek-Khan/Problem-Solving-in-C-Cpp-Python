import random
class Exam:
    
    def __init__(self,subject ):
        self.subject = subject
        
    def get_exam(self):
        return f"thanks for attending {self.subject} exam"
    def get_marks(self):
        marks = random.randint(1,100)
        return f" your marks = {marks}"
    
    
    
me = Exam("math")
her = Exam("english")
print(me.get_exam(), me.get_marks())
print(her.get_exam(), her.get_marks())