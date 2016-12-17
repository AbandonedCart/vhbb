#pragma once

#include <global_include.h>

#define ITEM_HEIGHT 90
#define ITEM_POSX 62

class ListItem {
public:
	ListItem();
	
	int Display(int posY, int highlight);
private:
	vita2d_texture *img_itm_panel;
	vita2d_texture *img_itm_panel_highlight;

	
	int display(int posY);
	int displayHighlight(int posY);

};

