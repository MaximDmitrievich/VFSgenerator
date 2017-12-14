#include "struct.h"

VFSgenerator::VFSgenerator()
{
    this->who ={"Ученый", 
                "Больной",
                "Пикачу", 
                "Кот", 
                "Никто", 
                "Террорист",
                "Сантехник",
                "Динозавр",
                "Мама",
                "Менеджер"
                };
    this->goes = {"в офис",
                  "в небытие",
                  "в больницу",
                  "драться",
                  "в лабораторию",
                  "на вызов",
                  "в парк юрского периода",
                  "на родительское собрание",
                  "к кошке",
                  "в метро"
                  };
    this->says = {":\n- Я совершил открытие!",
                  ":\n- Пика-пика!",
                  " мысленно: \n- Привет, ничто.",
                  ":\n- У меня болит голова.",
                  ":\n- Давай заведем котят.",
                  ":\n- Я мама Вовочки.",
                  ":\n- Я увольняюсь.",
                  ":\n- Аллах Акбар.",
                  ":\n- Возьмите меня есть туристов.",
                  ":\n- Какой серьезный засор."
                  };
    this->but =  {"А кошка отвечает:\n",
                  "А учительница:\n",
                  "А небытие ему в ответ:\n",
                  "А доктор ему:\n"
                  "А тут по громкоговорителю\n",
                  "А ученое сообщество:\n",
                  "А в ответ слышит:\n",
                  "А из трубы голос:\n",
                  "А начальник ему:\n",
                  "А бульбазавр на это:\n"
                  };
    this->something = {"- Ты не пикачу, ты сантехник.\n",
                       "- Я не доктор. Я динозавр.\n",
                       "- Давай лучше мышат.\n",
                       "- Привет ничтожество.\n",
                       "- Следующая станция бесконечная.\n",
                       "- Вы не мама, вы папа.\n",
                       "- Нам такие не нужны.\n",
                       "- Ты же на пенсию вышел.\n",
                       "- Ты - Новый Эйнштейн!\n",
                       "- Ну хочешь шутку расскажу\n"
                       };
    this->end =  {"Энтропия настала.\n",
                  "И уехали в Казахстан.\n",
                  "Динозавр все равно съел туристов.\n",
                  "Держите зачетку.\n",
                  "И все стали танцевать.\n",
                  "Вот и сказочке конец.\n",
                  "Так появилась вселенная.\n",
                  "С тех пор это закон.\n",
                  "И немедленно выпил.\n", 
                  "))).\n"
                  };
    srand(time(0));
}

VFSgenerator::~VFSgenerator() 
{
}
    
std::string VFSgenerator::Generate()
{
    std::string result = ""; 
    result += this->who.at(rand() % 10) + " приходит " + this->goes.at(rand() % 10) + " и говорит" + this->says.at(rand() % 10) + "\n" + this->but.at(rand() % 10) + this->something.at(rand() % 10);
    result += this->end.at(rand() % 10);
    return result;
}
