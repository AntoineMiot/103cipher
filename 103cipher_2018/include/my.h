/*
** EPITECH PROJECT, 2018
** include functions
** File description:
** include functions
*/

struct inv_matrice{
    float matrice6[16];
};

typedef struct inv_matrice inv_matrice;

char *my_getnbr(char *str);
void my_putstr(char const *str);
int my_strlen(char const *str);
int my_char_is_nb(char x);
char *my_str_isprintable(char *str);
void calcul_matrix_crypt4(int nb_line, float *m1, float *m2, int len);
void calcul_matrix_crypt3(int nb_line, float *m1, float *m2, int len);
void calcul_matrix_crypt2(int nb_line, float *m1, float *m2, int len);
void calcul_matrix_decrypt4(int nb_line, float *m1, float *m2, int len);
void calcul_matrix_decrypt3(int nb_line, float *m1, float *m2, int len);
void calcul_matrix_decrypt2(int nb_line, float *m1, float *m2, int len);
void calcul_matrix_decrypt1(int nb_line, float *m1, float *m2, int len);
void invert_1(float *m_r, int nb_col);
void invert_2(float *src, int nb_col);
void invert_3(float *src, int nb_col);
void invert_4(float *m2, int nb_col);
int nb_space(char *space);
int find_size_matrix_crypt(int len, int len_key);
int find_size_matrix_key(int len);
void make_matrix_crypt(char **av, float size_matrice, float *matrice_crypt);
void make_matrix_key(char **av, float *matrice_key, int nb_col, int type);
void make_matrix_decrypt(float *matrix_decrypt, char **str);
void error(int ac, char **av);
void calcul_matrix_crypt1(int nb_line, float *m1, float *m2, int len);
void invert_4_zero(inv_matrice *inv, float *matrice1);
void invert_4_one(inv_matrice *inv, float *matrice1);
void invert_4_two(inv_matrice *inv, float *matrice1);
void invert_4_three(inv_matrice *inv, float *matrice1);
void invert_4_four(inv_matrice *inv, float *matrice1);
void invert_4_five(inv_matrice *inv, float *matrice1);
void invert_4_six(inv_matrice *inv, float *matrice1);
void invert_4_seven(inv_matrice *inv, float *matrice1);
void invert_4_eight(inv_matrice *inv, float *matrice1);
void invert_4_nine(inv_matrice *inv, float *matrice1);
void invert_4_ten(inv_matrice *inv, float *matrice1);
void invert_4_eleven(inv_matrice *inv, float *matrice1);
void invert_4_twelve(inv_matrice *inv, float *matrice1);
void invert_4_thirteen(inv_matrice *inv, float *matrice1);
void invert_4_fourteen(inv_matrice *inv, float *matrice1);
void invert_4_fifteen(inv_matrice *inv, float *matrice1);
void distrib_invert4(inv_matrice *inv, float *matrice2);
void invert_4_nine(inv_matrice *inv, float *matrice1);