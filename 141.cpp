#include <iostream>

using namespace std;

double calculateGrade(double participationP, double participation, double quizzesPercentage, double quizzes, double projects, double projectsPercentage, double labs, double labsPercentage, double mid1, double mid1Percentage, double mid2, double mid2Percentage, double finalExam, double finalExamPercentage) {
    // Calculate weighted scores
    double participationScore = participation * (participationP / 100);
    double quizzesScore = quizzes * (quizzesPercentage / 100);
    double projectsScore = projects * (projectsPercentage / 100);
    double labsScore = labs * (labsPercentage / 100);
    double finalExamScore = finalExam * (finalExamPercentage / 100);
    double mid1S = mid1 * (mid1Percentage / 100);
    double mid2S = mid2 * (mid2Percentage / 100);

    // Calculate total grade
    double totalGrade = participationScore + quizzesScore + projectsScore + labsScore + finalExamScore + mid1S + mid2S;

    return totalGrade;
}

int main() {
    double participation, participationPercentage, 
    quizzes, quizzesPercentage, 
    projects, projectsPercentage, 
    labs, labsPercentage, 
    mid1, mid1Percentage, 
    mid2, mid2Percentage, 
    finalExam, finalExamPercentage;

    // Input grades and percentages from the user
    cout << "Enter Participation Percentage: ";
    cin >> participationPercentage;
    cout << "Enter Participation grade: ";
    cin >> participation;

    cout << "Enter Quizzes Percentage: ";
    cin >> quizzesPercentage;
    cout << "Enter Quizzes grade: ";
    cin >> quizzes;

    cout << "Enter Projects Percentage: ";
    cin >> projectsPercentage;
    cout << "Enter Projects grade: ";
    cin >> projects;

    cout << "Enter Labs Percentage: ";
    cin >> labsPercentage;
    cout << "Enter Lab grade: ";
    cin >> labs;

    cout << "Enter MidTerm 1 Percentage: ";
    cin >> mid1Percentage;
    cout << "Enter MidTerm 1 grade:";
    cin >> mid1;

    cout << "Enter MidTerm 2 Percentage: ";
    cin >> mid2Percentage;
    cout << "Enter MidTerm 2 grade:";
    cin >> mid2;

    cout << "Enter Final Exam Percentage: ";
    cin >> finalExamPercentage;
    cout << "Enter Final Exam grade: ";
    cin >> finalExam;

    // Calculate the total grade
    double totalGrade = calculateGrade(participationPercentage, participation,                     quizzesPercentage, quizzes, 
    projects, projectsPercentage, 
    labs, labsPercentage, 
    mid1, mid1Percentage, 
    mid2, mid2Percentage, 
    finalExam, finalExamPercentage);

    // Output the total grade
    cout << "Total grade: " << totalGrade << endl;

    return 0;
}
