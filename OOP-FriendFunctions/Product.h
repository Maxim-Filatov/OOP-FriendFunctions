#pragma once
class Product {
	private:
		int id;
		string name;
		bool presence;
		int price;
	public:
		Product();
		void setId(int id);
		int getId();
		void setName(string _name);
		string getName();
		void setPresence(bool presence);
		bool getPresence();
		void setPrice(int price);
		int getPrice();
};

