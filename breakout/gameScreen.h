#pragma once

enum class actualScreen{menu,gameplay,instructions,credits,exit, victory, lose};

void instructions(actualScreen& currentScreen);
void credits(actualScreen& currentScreen);
void victory(actualScreen& currentScreen);
void lose(actualScreen& currentScreen);