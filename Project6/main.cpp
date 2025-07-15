/*#include <raylib.h>
#include "game.h"
#include <string>

std::string FormatWithLeadingZeros(int number, int width) {
    std::string numberText = std::to_string(number);
    int leadingZeros = width - numberText.length();
    return numberText = std::string(leadingZeros, '0') + numberText;
}

int main()
{
    Color grey = { 29, 29, 27, 255 };
    Color yellow = { 243, 216, 63, 255 };
    int offset = 50;
    int windowWidth = 750;
    int windowHeight = 700;

    InitWindow(windowWidth + offset, windowHeight + 2 * offset, "C++ Space Invaders");
    InitAudioDevice();

    Font font = LoadFontEx("Font/monogram.ttf", 64, 0, 0);
    Texture2D spaceshipImage = LoadTexture("Graphics/spaceship.png");

    SetTargetFPS(60);

    Game game;

    while (WindowShouldClose() == false) {
        UpdateMusicStream(game.music);
        game.HandleInput();
        game.Update();
        BeginDrawing();
        ClearBackground(grey);
        DrawRectangleRoundedLines({ 10, 10, 780, 780 }, 0.18f, 20, yellow);
        DrawLineEx({ 25, 730 }, { 775, 730 }, 3, yellow);

        if (game.run) {
            DrawTextEx(font, "LEVEL 01", { 570, 740 }, 34, 2, yellow);
        }
        else {
            DrawTextEx(font, "GAME OVER", { 570, 740 }, 34, 2, yellow);
        }
        float x = 50.0;
        for (int i = 0; i < game.lives; i++) {
            DrawTextureV(spaceshipImage, { x, 745 }, WHITE);
            x += 50;
        }

        DrawTextEx(font, "SCORE", { 50, 15 }, 34, 2, yellow);
        std::string scoreText = FormatWithLeadingZeros(game.score, 5);
        DrawTextEx(font, scoreText.c_str(), { 50, 40 }, 34, 2, yellow);

        DrawTextEx(font, "HIGH-SCORE", { 570, 15 }, 34, 2, yellow);
        std::string highscoreText = FormatWithLeadingZeros(game.highscore, 5);
        DrawTextEx(font, highscoreText.c_str(), { 655, 40 }, 34, 2, yellow);

        game.Draw();
        EndDrawing();
    }

    CloseWindow();
    CloseAudioDevice();
} */



#include <raylib.h>
#include "game.h"
#include <string>

std::string FormatWithLeadingZeros(int number, int width) {
    std::string numberText = std::to_string(number);
    int leadingZeros = width - numberText.length();
    return std::string(leadingZeros, '0') + numberText;
}

int main()
{
    Color grey = { 29, 29, 27, 255 };
    Color yellow = { 243, 216, 63, 255 };
    Color pink = { 255, 182, 193, 255 };  

    int offset = 50;
    int windowWidth = 750;
    int windowHeight = 700;

    InitWindow(windowWidth + offset, windowHeight + 2 * offset, "GALACTIC DEFENDER");
    InitAudioDevice();

    Font font = LoadFontEx("Font/monogram.ttf", 64, 0, 0);
    Texture2D spaceshipImage = LoadTexture("Graphics/spaceship.png");

    SetTargetFPS(60);

    Game game;

    while (WindowShouldClose() == false) {
        UpdateMusicStream(game.music);
        game.HandleInput();
        game.Update();

        BeginDrawing();
        ClearBackground(grey);

        // Girly pink border
        DrawRectangleRoundedLines({ 10, 10, 780, 780 }, 0.18f, 20, pink);
        DrawLineEx({ 25, 730 }, { 775, 730 }, 3, pink); 

        if (game.run) {
            // Display "LEVEL" with increasing level text color 
            std::string levelText = "LEVEL " + std::to_string(game.level);
            DrawTextEx(font, levelText.c_str(), { 570, 740 }, 34, 2, pink);
        }

        // Game Over screen
        if (!game.run) {
            ClearBackground(grey);

           
            DrawTextEx(font, "GAME OVER", { 570, 740 }, 34, 2, pink); 
            const char* gameOverText = "Game Over! Would you like to play again? Press ENTER!";
            const char* closeWindowText = "(If you don't want to play again, please close the window.)";
            int fontSize = 20;

            // Display final score
            std::string scoreText = "Your Score: " + std::to_string(game.finalscore);
            int scoreTextWidth = MeasureText(scoreText.c_str(), fontSize);
            int scoreCenterX = (windowWidth + offset - scoreTextWidth) / 2;


            // Calculate the horizontal center position for both lines
            int textWidth1 = MeasureText(gameOverText, fontSize);
            int textWidth2 = MeasureText(closeWindowText, fontSize);
            int centerX1 = (windowWidth + offset - textWidth1) / 2;
            int centerX2 = (windowWidth + offset - textWidth2) / 2;

            // Vertical position to center the texts
            int centerY = (windowHeight + 2 * offset) / 2;

            DrawText(gameOverText, centerX1, centerY - 40, fontSize, PINK);
            DrawText(scoreText.c_str(), scoreCenterX, centerY, fontSize, PINK); // Display the final score
            DrawText(closeWindowText, centerX2, centerY + 40, fontSize, PINK);

             

        }

        // Draw the remaining lives
        float x = 50.0;
        for (int i = 0; i < game.lives; i++) {
            DrawTextureV(spaceshipImage, { x, 745 }, WHITE);
            x += 50;
        }

        // Score display
        DrawTextEx(font, "SCORE", { 50, 15 }, 34, 2, pink);
        std::string scoreText = FormatWithLeadingZeros(game.score, 5);
        DrawTextEx(font, scoreText.c_str(), { 50, 40 }, 34, 2, pink);

        // High-score display
        DrawTextEx(font, "HIGH-SCORE", { 570, 15 }, 34, 2, pink);
        std::string highscoreText = FormatWithLeadingZeros(game.highscore, 5);
        DrawTextEx(font, highscoreText.c_str(), { 655, 40 }, 34, 2, pink);

        // Draw the game objects (spaceship, aliens, lasers, etc.)
        game.Draw();

        EndDrawing();
    }

    CloseWindow();
    CloseAudioDevice();
}
