unsigned int faStr1(const char* str)
{
    int i = 0;
    int count = 0;
    int flag = -1;
    int f = 0;
    while (str[i] != 0) {
      
        if ((flag == -1) && (str[i] != ' ')) {
            count += 1;
            flag = 0;
        }
        else if ((flag == 0) && (str[i] >= '0') && (str[i] <= '9')) {
            f = 1;
        }
        else if ((flag == 0)&& (str[i] == ' ')) {
            flag = -1;
            if (f == 1) {
                count -= 1;
                f = 0;
            }
        }
        i++;
    }
    return count;
}
unsigned int faStr2(const char* str)
{
    int i = 0;
    int count = 0;
    int flag = -1;
    int f = 0;
    while (str[i] != 0) {
        if ((flag == -1) && (str[i] != ' ') && (str[i] >= 65) && (str[i] <= 90)) {
            count += 1;
            flag = 0;
        }
        else if ((flag == 0) && (str[i] == ' ')) {
            flag = -1;
            if (f == 1) {
                count -= 1;
                f = 0;
            }
        }
        else if ((flag == 0) && ((str[i] < 97) || (str[i] > 122))) {
            f = 1;
        }
        i++;
    }
    return count;
}
unsigned int faStr3(const char* str)
{
    int i = 0;
    int count = 0;
    int length = 0;
    int flag = -1;
    while (str[i] != 0) {
        if ((flag == -1) && (str[i] != ' ')) {
            count += 1;
            length += 1;
            flag = 0;
        }
        else if ((flag == 0) && (str[i] != ' ')) {
            length += 1;
        }
        else if ((flag == 0) && (str[i] == ' ')) {
            flag = -1;
        }
        i++;
    }
    if ((length % count) < 0, 5)
        return length / count;
    else return length / count + 1;
}
