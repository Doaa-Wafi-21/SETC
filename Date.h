#pragma once
namespace biblio {
	class Date
	{
	private:
		int jour;
		int anne;
		int mois;
	public:
		Date(int, int, int);
		static bool estBissextie(int);
		static bool estValide(int jour, int anne, int mois);
		bool operator ==(const Date& D) const;
		bool operator <(const Date& D) const;
		void afficher() const;
		~Date();


	};
}

