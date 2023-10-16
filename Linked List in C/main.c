#include <stdio.h>
#include <stdlib.h>

struct node {
    char *name;
    int price;
    int pageAmount;
    char *language;
    int weight;
    int yearOfDistribution;
    struct node *next;
};
struct node *head = NULL;

void printList() {
    struct node *p = head;
    while (p != NULL) {
        printf(p->name);
        printf(" - %d - ", p->price);
        printf("%d - ", p->pageAmount);
        printf(p->language);
        printf(" - %d - ", p->weight);
        printf("%d\n", p->yearOfDistribution);
        p = p->next;
    }
}

void insertatbegin(char name[], int price, int pageAmount, char language[], int weight, int yearOfDistribution) {
    struct node *lk = (struct node*) malloc(sizeof(struct node));

    lk->name = name;
    lk->price = price;
    lk->pageAmount = pageAmount;
    lk->language = language;
    lk->weight = weight;
    lk->yearOfDistribution = yearOfDistribution;
    lk->next = head;

    head = lk;
}

void insertatend(char name[], int price, int pageAmount, char language[], int weight, int yearOfDistribution){
    struct node *lk = (struct node*) malloc(sizeof(struct node));

    lk->name = name;
    lk->price = price;
    lk->pageAmount = pageAmount;
    lk->language = language;
    lk->weight = weight;
    lk->yearOfDistribution = yearOfDistribution;
    lk->next = NULL;

    struct node *linkedlist = head;

    while(linkedlist->next != NULL)
        linkedlist = linkedlist->next;

    linkedlist->next = lk;
}

int main() {
    insertatbegin("Гаррі Поттер та філософський камінь", 380, 319, "українська", 100, 1997);
    insertatend("Гаррі Поттер і Таємна кімната", 380, 351, "українська", 110, 1998);
    insertatend("Гаррі Поттер і в'язень Азкабану", 380, 383, "українська", 120, 1999);
    insertatend("Гаррі Поттер і Келих вогню", 400, 670, "українська", 130, 2000);
    insertatend("Гаррі Поттер і Орден Фенікса", 480, 815, "українська", 140, 2003);
    insertatend("Гаррі Поттер і Напівкровний Принц", 400, 576, "українська", 150, 2005);
    insertatend("Гаррі Поттер і Смертельні реліквії", 400, 640, "українська", 160, 2007);
    printList();
    return 0;
}
