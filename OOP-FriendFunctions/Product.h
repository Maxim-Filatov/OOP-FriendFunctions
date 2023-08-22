#pragma once

class Product {
	private:
		int id;
		bool presence;
		int price;
	public:
		Product();
		void setId(int id);
		int getId();
		void setPresence(bool presence);
		bool getPresence();
		void setPrice(int price);
		int getPrice();
};

