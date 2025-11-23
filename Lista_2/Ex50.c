#include <stdio.h>
#include <math.h>

#define PI 3.14159265

// Protótipos das funções auxiliares
void menu_areas();
void menu_volumes();
void menu_conversoes();
void menu_equacoes();

int main() {
    int opcao;

    do {
        printf("\n#########################################\n");
        printf("###   CALCULADORA DE ENGENHARIA 1.0   ###\n");
        printf("#########################################\n");
        printf("1. Areas (Planas)\n");
        printf("2. Volumes (Espaciais)\n");
        printf("3. Conversoes (Polar/Cartesiano)\n");
        printf("4. Equacoes (1o e 2o Grau)\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: menu_areas(); break;
            case 2: menu_volumes(); break;
            case 3: menu_conversoes(); break;
            case 4: menu_equacoes(); break;
            case 0: printf("Encerrando sistema...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}

// MENU: ÁREAS
void menu_areas() {
    int op;
    double r, b, h, B, area;
    
    printf("\n--- Calculo de Areas ---\n");
    printf("1. Circulo\n2. Triangulo\n3. Trapezio\n> ");
    scanf("%d", &op);

    switch(op) {
        case 1: // Círculo
            printf("Raio: "); scanf("%lf", &r);
            if(r < 0) printf("Erro: Raio negativo.\n");
            else printf("Area do Circulo: %.2lf\n", PI * pow(r, 2));
            break;
        case 2: // Triângulo
            printf("Base e Altura: "); scanf("%lf %lf", &b, &h);
            printf("Area do Triangulo: %.2lf\n", (b * h) / 2);
            break;
        case 3: // Trapézio
            printf("Base Maior, Base Menor e Altura: "); scanf("%lf %lf %lf", &B, &b, &h);
            area = ((B + b) * h) / 2;
            printf("Area do Trapezio: %.2lf\n", area);
            break;
        default: printf("Opcao invalida.\n");
    }
}

// MENU: VOLUMES
void menu_volumes() {
    int op;
    double r, h, vol;

    printf("\n--- Calculo de Volumes ---\n");
    printf("1. Esfera\n2. Cilindro\n3. Cone\n> ");
    scanf("%d", &op);

    switch(op) {
        case 1: // Esfera: (4/3) * pi * r^3
            printf("Raio: "); scanf("%lf", &r);
            vol = (4.0/3.0) * PI * pow(r, 3);
            printf("Volume da Esfera: %.2lf\n", vol);
            break;
        case 2: // Cilindro: pi * r^2 * h
            printf("Raio e Altura: "); scanf("%lf %lf", &r, &h);
            vol = PI * pow(r, 2) * h;
            printf("Volume do Cilindro: %.2lf\n", vol);
            break;
        case 3: // Cone: (1/3) * pi * r^2 * h
            printf("Raio e Altura: "); scanf("%lf %lf", &r, &h);
            vol = (1.0/3.0) * PI * pow(r, 2) * h;
            printf("Volume do Cone: %.2lf\n", vol);
            break;
        default: printf("Opcao invalida.\n");
    }
}

// MENU: CONVERSÕES
void menu_conversoes() {
    int op;
    double x, y, r, theta;

    printf("\n--- Conversoes ---\n");
    printf("1. Cartesiano (x,y) -> Polar (r,t)\n");
    printf("2. Polar (r,t) -> Cartesiano (x,y)\n> ");
    scanf("%d", &op);

    if (op == 1) {
        printf("Digite X e Y: "); scanf("%lf %lf", &x, &y);
        r = sqrt(pow(x, 2) + pow(y, 2));
        theta = atan2(y, x); // Radianos
        printf("Polar: r = %.2lf, theta = %.2lf rad (%.1lf graus)\n", r, theta, theta * 180/PI);
    } else if (op == 2) {
        printf("Digite Raio (r) e Angulo (graus): "); scanf("%lf %lf", &r, &theta);
        double rad = theta * PI / 180.0;
        x = r * cos(rad);
        y = r * sin(rad);
        printf("Cartesiano: x = %.2lf, y = %.2lf\n", x, y);
    } else {
        printf("Opcao invalida.\n");
    }
}

// MENU: EQUAÇÕES
void menu_equacoes() {
    int op;
    double a, b, c, delta;

    printf("\n--- Equacoes ---\n");
    printf("1. Primeiro Grau (ax + b = 0)\n");
    printf("2. Segundo Grau (ax^2 + bx + c = 0)\n> ");
    scanf("%d", &op);

    if (op == 1) {
        printf("Digite a e b: "); scanf("%lf %lf", &a, &b);
        if (a == 0) printf("Erro: 'a' nao pode ser zero.\n");
        else printf("x = %.2lf\n", -b / a);
    } else if (op == 2) {
        printf("Digite a, b e c: "); scanf("%lf %lf %lf", &a, &b, &c);
        if (a == 0) {
            printf("Nao e equacao de 2o grau.\n");
            return;
        }
        delta = pow(b, 2) - 4 * a * c;
        if (delta > 0) {
            printf("x1 = %.2lf\n", (-b + sqrt(delta)) / (2*a));
            printf("x2 = %.2lf\n", (-b - sqrt(delta)) / (2*a));
        } else if (delta == 0) {
            printf("Raiz unica: x = %.2lf\n", -b / (2*a));
        } else {
            printf("Sem raizes reais.\n");
        }
    } else {
        printf("Opcao invalida.\n");
    }
}